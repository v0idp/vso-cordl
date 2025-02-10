#pragma once
// IWYU pragma private; include "BeautifyEffect/BEAUTIFY_QUALITY.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BEAUTIFY_QUALITY)
// Forward declare root types
namespace BeautifyEffect {
struct BEAUTIFY_QUALITY;
}
// Write type traits
MARK_VAL_T(::BeautifyEffect::BEAUTIFY_QUALITY);
// Dependencies 
namespace BeautifyEffect {
// Is value type: true
// CS Name: BeautifyEffect.BEAUTIFY_QUALITY
struct CORDL_TYPE BEAUTIFY_QUALITY {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BEAUTIFY_QUALITY_Unwrapped
enum struct __BEAUTIFY_QUALITY_Unwrapped : int32_t {
__E_BestQuality = static_cast<int32_t>(0x0),
__E_BestPerformance = static_cast<int32_t>(0x1),
__E_Basic = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BEAUTIFY_QUALITY_Unwrapped () const noexcept {
return static_cast<__BEAUTIFY_QUALITY_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BEAUTIFY_QUALITY() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BEAUTIFY_QUALITY(int32_t  value__) noexcept;

/// @brief Field Basic value: I32(2)
static ::BeautifyEffect::BEAUTIFY_QUALITY const Basic;

/// @brief Field BestPerformance value: I32(1)
static ::BeautifyEffect::BEAUTIFY_QUALITY const BestPerformance;

/// @brief Field BestQuality value: I32(0)
static ::BeautifyEffect::BEAUTIFY_QUALITY const BestQuality;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1839};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::BEAUTIFY_QUALITY, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::BEAUTIFY_QUALITY, 0x4>, "Size mismatch!");

} // namespace end def BeautifyEffect
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::BEAUTIFY_QUALITY, "BeautifyEffect", "BEAUTIFY_QUALITY");
