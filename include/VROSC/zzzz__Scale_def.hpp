#pragma once
// IWYU pragma private; include "VROSC/Scale.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scale)
// Forward declare root types
namespace VROSC {
struct Scale;
}
// Write type traits
MARK_VAL_T(::VROSC::Scale);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Scale
struct CORDL_TYPE Scale {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Scale_Unwrapped
enum struct __Scale_Unwrapped : int32_t {
__E_C = static_cast<int32_t>(0x1),
__E_Db = static_cast<int32_t>(0x2),
__E_D = static_cast<int32_t>(0x4),
__E_Eb = static_cast<int32_t>(0x8),
__E_E = static_cast<int32_t>(0x10),
__E_F = static_cast<int32_t>(0x20),
__E_Gb = static_cast<int32_t>(0x40),
__E_G = static_cast<int32_t>(0x80),
__E_Ab = static_cast<int32_t>(0x100),
__E_A = static_cast<int32_t>(0x200),
__E_Bb = static_cast<int32_t>(0x400),
__E_B = static_cast<int32_t>(0x800),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Scale_Unwrapped () const noexcept {
return static_cast<__Scale_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Scale() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Scale(int32_t  value__) noexcept;

/// @brief Field A value: I32(512)
static ::VROSC::Scale const A;

/// @brief Field Ab value: I32(256)
static ::VROSC::Scale const Ab;

/// @brief Field B value: I32(2048)
static ::VROSC::Scale const B;

/// @brief Field Bb value: I32(1024)
static ::VROSC::Scale const Bb;

/// @brief Field C value: I32(1)
static ::VROSC::Scale const C;

/// @brief Field D value: I32(4)
static ::VROSC::Scale const D;

/// @brief Field Db value: I32(2)
static ::VROSC::Scale const Db;

/// @brief Field E value: I32(16)
static ::VROSC::Scale const E;

/// @brief Field Eb value: I32(8)
static ::VROSC::Scale const Eb;

/// @brief Field F value: I32(32)
static ::VROSC::Scale const F;

/// @brief Field G value: I32(128)
static ::VROSC::Scale const G;

/// @brief Field Gb value: I32(64)
static ::VROSC::Scale const Gb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Scale, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Scale, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Scale, "VROSC", "Scale");
