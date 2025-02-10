#pragma once
// IWYU pragma private; include "UnityEngine/TextGenerationError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerationError)
// Forward declare root types
namespace UnityEngine {
struct TextGenerationError;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextGenerationError);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextGenerationError
struct CORDL_TYPE TextGenerationError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextGenerationError_Unwrapped
enum struct __TextGenerationError_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CustomSizeOnNonDynamicFont = static_cast<int32_t>(0x1),
__E_CustomStyleOnNonDynamicFont = static_cast<int32_t>(0x2),
__E_NoFont = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextGenerationError_Unwrapped () const noexcept {
return static_cast<__TextGenerationError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextGenerationError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextGenerationError(int32_t  value__) noexcept;

/// @brief Field CustomSizeOnNonDynamicFont value: I32(1)
static ::UnityEngine::TextGenerationError const CustomSizeOnNonDynamicFont;

/// @brief Field CustomStyleOnNonDynamicFont value: I32(2)
static ::UnityEngine::TextGenerationError const CustomStyleOnNonDynamicFont;

/// @brief Field NoFont value: I32(4)
static ::UnityEngine::TextGenerationError const NoFont;

/// @brief Field None value: I32(0)
static ::UnityEngine::TextGenerationError const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextGenerationError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextGenerationError, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerationError, "UnityEngine", "TextGenerationError");
