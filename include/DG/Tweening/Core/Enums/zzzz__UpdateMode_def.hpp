#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/UpdateMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateMode)
// Forward declare root types
namespace DG::Tweening::Core::Enums {
struct UpdateMode;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Core::Enums::UpdateMode);
// Dependencies 
namespace DG::Tweening::Core::Enums {
// Is value type: true
// CS Name: DG.Tweening.Core.Enums.UpdateMode
struct CORDL_TYPE UpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UpdateMode_Unwrapped
enum struct __UpdateMode_Unwrapped : int32_t {
__E_Update = static_cast<int32_t>(0x0),
__E_Goto = static_cast<int32_t>(0x1),
__E_IgnoreOnUpdate = static_cast<int32_t>(0x2),
__E_IgnoreOnComplete = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UpdateMode_Unwrapped () const noexcept {
return static_cast<__UpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UpdateMode(int32_t  value__) noexcept;

/// @brief Field Goto value: I32(1)
static ::DG::Tweening::Core::Enums::UpdateMode const Goto;

/// @brief Field IgnoreOnComplete value: I32(3)
static ::DG::Tweening::Core::Enums::UpdateMode const IgnoreOnComplete;

/// @brief Field IgnoreOnUpdate value: I32(2)
static ::DG::Tweening::Core::Enums::UpdateMode const IgnoreOnUpdate;

/// @brief Field Update value: I32(0)
static ::DG::Tweening::Core::Enums::UpdateMode const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::Enums::UpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Enums::UpdateMode, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening::Core::Enums
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Enums::UpdateMode, "DG.Tweening.Core.Enums", "UpdateMode");
