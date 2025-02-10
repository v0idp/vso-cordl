#pragma once
// IWYU pragma private; include "BeautifyEffect/BEAUTIFY_PRESET.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BEAUTIFY_PRESET)
// Forward declare root types
namespace BeautifyEffect {
struct BEAUTIFY_PRESET;
}
// Write type traits
MARK_VAL_T(::BeautifyEffect::BEAUTIFY_PRESET);
// Dependencies 
namespace BeautifyEffect {
// Is value type: true
// CS Name: BeautifyEffect.BEAUTIFY_PRESET
struct CORDL_TYPE BEAUTIFY_PRESET {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BEAUTIFY_PRESET_Unwrapped
enum struct __BEAUTIFY_PRESET_Unwrapped : int32_t {
__E_Soft = static_cast<int32_t>(0xa),
__E_Medium = static_cast<int32_t>(0x14),
__E_Strong = static_cast<int32_t>(0x1e),
__E_Exaggerated = static_cast<int32_t>(0x28),
__E_Custom = static_cast<int32_t>(0x3e7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BEAUTIFY_PRESET_Unwrapped () const noexcept {
return static_cast<__BEAUTIFY_PRESET_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BEAUTIFY_PRESET() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BEAUTIFY_PRESET(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(999)
static ::BeautifyEffect::BEAUTIFY_PRESET const Custom;

/// @brief Field Exaggerated value: I32(40)
static ::BeautifyEffect::BEAUTIFY_PRESET const Exaggerated;

/// @brief Field Medium value: I32(20)
static ::BeautifyEffect::BEAUTIFY_PRESET const Medium;

/// @brief Field Soft value: I32(10)
static ::BeautifyEffect::BEAUTIFY_PRESET const Soft;

/// @brief Field Strong value: I32(30)
static ::BeautifyEffect::BEAUTIFY_PRESET const Strong;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1840};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::BEAUTIFY_PRESET, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::BEAUTIFY_PRESET, 0x4>, "Size mismatch!");

} // namespace end def BeautifyEffect
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::BEAUTIFY_PRESET, "BeautifyEffect", "BEAUTIFY_PRESET");
