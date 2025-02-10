#pragma once
// IWYU pragma private; include "BeautifyEffect/BEAUTIFY_TMO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BEAUTIFY_TMO)
// Forward declare root types
namespace BeautifyEffect {
struct BEAUTIFY_TMO;
}
// Write type traits
MARK_VAL_T(::BeautifyEffect::BEAUTIFY_TMO);
// Dependencies 
namespace BeautifyEffect {
// Is value type: true
// CS Name: BeautifyEffect.BEAUTIFY_TMO
struct CORDL_TYPE BEAUTIFY_TMO {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BEAUTIFY_TMO_Unwrapped
enum struct __BEAUTIFY_TMO_Unwrapped : int32_t {
__E_Linear = static_cast<int32_t>(0x0),
__E_ACES = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BEAUTIFY_TMO_Unwrapped () const noexcept {
return static_cast<__BEAUTIFY_TMO_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BEAUTIFY_TMO() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BEAUTIFY_TMO(int32_t  value__) noexcept;

/// @brief Field ACES value: I32(10)
static ::BeautifyEffect::BEAUTIFY_TMO const ACES;

/// @brief Field Linear value: I32(0)
static ::BeautifyEffect::BEAUTIFY_TMO const Linear;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::BEAUTIFY_TMO, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::BEAUTIFY_TMO, 0x4>, "Size mismatch!");

} // namespace end def BeautifyEffect
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::BEAUTIFY_TMO, "BeautifyEffect", "BEAUTIFY_TMO");
