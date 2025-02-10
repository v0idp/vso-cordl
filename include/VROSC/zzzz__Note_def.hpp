#pragma once
// IWYU pragma private; include "VROSC/Note.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Note)
// Forward declare root types
namespace VROSC {
struct Note;
}
// Write type traits
MARK_VAL_T(::VROSC::Note);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Note
struct CORDL_TYPE Note {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Note_Unwrapped
enum struct __Note_Unwrapped : int32_t {
__E_C = static_cast<int32_t>(0x0),
__E_Db = static_cast<int32_t>(0x1),
__E_D = static_cast<int32_t>(0x2),
__E_Eb = static_cast<int32_t>(0x3),
__E_E = static_cast<int32_t>(0x4),
__E_F = static_cast<int32_t>(0x5),
__E_Gb = static_cast<int32_t>(0x6),
__E_G = static_cast<int32_t>(0x7),
__E_Ab = static_cast<int32_t>(0x8),
__E_A = static_cast<int32_t>(0x9),
__E_Bb = static_cast<int32_t>(0xa),
__E_B = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Note_Unwrapped () const noexcept {
return static_cast<__Note_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Note() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Note(int32_t  value__) noexcept;

/// @brief Field A value: I32(9)
static ::VROSC::Note const A;

/// @brief Field Ab value: I32(8)
static ::VROSC::Note const Ab;

/// @brief Field B value: I32(11)
static ::VROSC::Note const B;

/// @brief Field Bb value: I32(10)
static ::VROSC::Note const Bb;

/// @brief Field C value: I32(0)
static ::VROSC::Note const C;

/// @brief Field D value: I32(2)
static ::VROSC::Note const D;

/// @brief Field Db value: I32(1)
static ::VROSC::Note const Db;

/// @brief Field E value: I32(4)
static ::VROSC::Note const E;

/// @brief Field Eb value: I32(3)
static ::VROSC::Note const Eb;

/// @brief Field F value: I32(5)
static ::VROSC::Note const F;

/// @brief Field G value: I32(7)
static ::VROSC::Note const G;

/// @brief Field Gb value: I32(6)
static ::VROSC::Note const Gb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Note, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Note, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Note, "VROSC", "Note");
