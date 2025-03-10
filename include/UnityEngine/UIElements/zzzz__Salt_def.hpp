#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Salt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Salt)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Salt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Salt);
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Salt
struct CORDL_TYPE Salt {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Salt_Unwrapped
enum struct __Salt_Unwrapped : int32_t {
__E_TagNameSalt = static_cast<int32_t>(0xd),
__E_IdSalt = static_cast<int32_t>(0x11),
__E_ClassSalt = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Salt_Unwrapped () const noexcept {
return static_cast<__Salt_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Salt() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Salt(int32_t  value__) noexcept;

/// @brief Field ClassSalt value: I32(19)
static ::UnityEngine::UIElements::Salt const ClassSalt;

/// @brief Field IdSalt value: I32(17)
static ::UnityEngine::UIElements::Salt const IdSalt;

/// @brief Field TagNameSalt value: I32(13)
static ::UnityEngine::UIElements::Salt const TagNameSalt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Salt, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Salt, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Salt, "UnityEngine.UIElements", "Salt");
