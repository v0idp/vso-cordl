#pragma once
// IWYU pragma private; include "DG/Tweening/TweenType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenType)
// Forward declare root types
namespace DG::Tweening {
struct TweenType;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::TweenType);
// Dependencies 
namespace DG::Tweening {
// Is value type: true
// CS Name: DG.Tweening.TweenType
struct CORDL_TYPE TweenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TweenType_Unwrapped
enum struct __TweenType_Unwrapped : int32_t {
__E_Tweener = static_cast<int32_t>(0x0),
__E_Sequence = static_cast<int32_t>(0x1),
__E_Callback = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TweenType_Unwrapped () const noexcept {
return static_cast<__TweenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TweenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TweenType(int32_t  value__) noexcept;

/// @brief Field Callback value: I32(2)
static ::DG::Tweening::TweenType const Callback;

/// @brief Field Sequence value: I32(1)
static ::DG::Tweening::TweenType const Sequence;

/// @brief Field Tweener value: I32(0)
static ::DG::Tweening::TweenType const Tweener;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10787};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::TweenType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::TweenType, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenType, "DG.Tweening", "TweenType");
