#pragma once
// IWYU pragma private; include "DG/Tweening/AutoPlay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoPlay)
// Forward declare root types
namespace DG::Tweening {
struct AutoPlay;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::AutoPlay);
// Dependencies 
namespace DG::Tweening {
// Is value type: true
// CS Name: DG.Tweening.AutoPlay
struct CORDL_TYPE AutoPlay {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AutoPlay_Unwrapped
enum struct __AutoPlay_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AutoPlaySequences = static_cast<int32_t>(0x1),
__E_AutoPlayTweeners = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AutoPlay_Unwrapped () const noexcept {
return static_cast<__AutoPlay_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AutoPlay() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AutoPlay(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::DG::Tweening::AutoPlay const All;

/// @brief Field AutoPlaySequences value: I32(1)
static ::DG::Tweening::AutoPlay const AutoPlaySequences;

/// @brief Field AutoPlayTweeners value: I32(2)
static ::DG::Tweening::AutoPlay const AutoPlayTweeners;

/// @brief Field None value: I32(0)
static ::DG::Tweening::AutoPlay const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10683};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::AutoPlay, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::AutoPlay, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::AutoPlay, "DG.Tweening", "AutoPlay");
