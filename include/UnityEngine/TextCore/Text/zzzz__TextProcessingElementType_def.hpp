#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextProcessingElementType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextProcessingElementType)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextProcessingElementType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextProcessingElementType);
// Dependencies 
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextProcessingElementType
struct CORDL_TYPE TextProcessingElementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextProcessingElementType_Unwrapped
enum struct __TextProcessingElementType_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_TextCharacterElement = static_cast<int32_t>(0x1),
__E_TextMarkupElement = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextProcessingElementType_Unwrapped () const noexcept {
return static_cast<__TextProcessingElementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextProcessingElementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingElementType(int32_t  value__) noexcept;

/// @brief Field TextCharacterElement value: I32(1)
static ::UnityEngine::TextCore::Text::TextProcessingElementType const TextCharacterElement;

/// @brief Field TextMarkupElement value: I32(2)
static ::UnityEngine::TextCore::Text::TextProcessingElementType const TextMarkupElement;

/// @brief Field Undefined value: I32(0)
static ::UnityEngine::TextCore::Text::TextProcessingElementType const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10384};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextProcessingElementType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextProcessingElementType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextProcessingElementType, "UnityEngine.TextCore.Text", "TextProcessingElementType");
