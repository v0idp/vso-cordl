#pragma once
// IWYU pragma private; include "Firebase/Firestore/Source.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Source)
// Forward declare root types
namespace Firebase::Firestore {
struct Source;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::Source);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.Source
struct CORDL_TYPE Source {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Source_Unwrapped
enum struct __Source_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Server = static_cast<int32_t>(0x1),
__E_Cache = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Source_Unwrapped () const noexcept {
return static_cast<__Source_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Source() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Source(int32_t  value__) noexcept;

/// @brief Field Cache value: I32(2)
static ::Firebase::Firestore::Source const Cache;

/// @brief Field Default value: I32(0)
static ::Firebase::Firestore::Source const Default;

/// @brief Field Server value: I32(1)
static ::Firebase::Firestore::Source const Server;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11192};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Source, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Source, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Source, "Firebase.Firestore", "Source");
