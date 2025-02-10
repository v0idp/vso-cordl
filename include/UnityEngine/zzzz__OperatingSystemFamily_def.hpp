#pragma once
// IWYU pragma private; include "UnityEngine/OperatingSystemFamily.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OperatingSystemFamily)
// Forward declare root types
namespace UnityEngine {
struct OperatingSystemFamily;
}
// Write type traits
MARK_VAL_T(::UnityEngine::OperatingSystemFamily);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.OperatingSystemFamily
struct CORDL_TYPE OperatingSystemFamily {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OperatingSystemFamily_Unwrapped
enum struct __OperatingSystemFamily_Unwrapped : int32_t {
__E_Other = static_cast<int32_t>(0x0),
__E_MacOSX = static_cast<int32_t>(0x1),
__E_Windows = static_cast<int32_t>(0x2),
__E_Linux = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OperatingSystemFamily_Unwrapped () const noexcept {
return static_cast<__OperatingSystemFamily_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OperatingSystemFamily() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OperatingSystemFamily(int32_t  value__) noexcept;

/// @brief Field Linux value: I32(3)
static ::UnityEngine::OperatingSystemFamily const Linux;

/// @brief Field MacOSX value: I32(1)
static ::UnityEngine::OperatingSystemFamily const MacOSX;

/// @brief Field Other value: I32(0)
static ::UnityEngine::OperatingSystemFamily const Other;

/// @brief Field Windows value: I32(2)
static ::UnityEngine::OperatingSystemFamily const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::OperatingSystemFamily, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::OperatingSystemFamily, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::OperatingSystemFamily, "UnityEngine", "OperatingSystemFamily");
