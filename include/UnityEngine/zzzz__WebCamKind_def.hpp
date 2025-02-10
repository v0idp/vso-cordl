#pragma once
// IWYU pragma private; include "UnityEngine/WebCamKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebCamKind)
// Forward declare root types
namespace UnityEngine {
struct WebCamKind;
}
// Write type traits
MARK_VAL_T(::UnityEngine::WebCamKind);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.WebCamKind
struct CORDL_TYPE WebCamKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebCamKind_Unwrapped
enum struct __WebCamKind_Unwrapped : int32_t {
__E_WideAngle = static_cast<int32_t>(0x1),
__E_Telephoto = static_cast<int32_t>(0x2),
__E_ColorAndDepth = static_cast<int32_t>(0x3),
__E_UltraWideAngle = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebCamKind_Unwrapped () const noexcept {
return static_cast<__WebCamKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebCamKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WebCamKind(int32_t  value__) noexcept;

/// @brief Field ColorAndDepth value: I32(3)
static ::UnityEngine::WebCamKind const ColorAndDepth;

/// @brief Field Telephoto value: I32(2)
static ::UnityEngine::WebCamKind const Telephoto;

/// @brief Field UltraWideAngle value: I32(4)
static ::UnityEngine::WebCamKind const UltraWideAngle;

/// @brief Field WideAngle value: I32(1)
static ::UnityEngine::WebCamKind const WideAngle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12129};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WebCamKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WebCamKind, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WebCamKind, "UnityEngine", "WebCamKind");
