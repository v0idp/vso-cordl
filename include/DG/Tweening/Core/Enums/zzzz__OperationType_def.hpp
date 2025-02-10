#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/OperationType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OperationType)
// Forward declare root types
namespace DG::Tweening::Core::Enums {
struct OperationType;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Core::Enums::OperationType);
// Dependencies 
namespace DG::Tweening::Core::Enums {
// Is value type: true
// CS Name: DG.Tweening.Core.Enums.OperationType
struct CORDL_TYPE OperationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OperationType_Unwrapped
enum struct __OperationType_Unwrapped : int32_t {
__E_Complete = static_cast<int32_t>(0x0),
__E_Despawn = static_cast<int32_t>(0x1),
__E_Flip = static_cast<int32_t>(0x2),
__E_Goto = static_cast<int32_t>(0x3),
__E_Pause = static_cast<int32_t>(0x4),
__E_Play = static_cast<int32_t>(0x5),
__E_PlayForward = static_cast<int32_t>(0x6),
__E_PlayBackwards = static_cast<int32_t>(0x7),
__E_Rewind = static_cast<int32_t>(0x8),
__E_SmoothRewind = static_cast<int32_t>(0x9),
__E_Restart = static_cast<int32_t>(0xa),
__E_TogglePause = static_cast<int32_t>(0xb),
__E_IsTweening = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OperationType_Unwrapped () const noexcept {
return static_cast<__OperationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OperationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OperationType(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(0)
static ::DG::Tweening::Core::Enums::OperationType const Complete;

/// @brief Field Despawn value: I32(1)
static ::DG::Tweening::Core::Enums::OperationType const Despawn;

/// @brief Field Flip value: I32(2)
static ::DG::Tweening::Core::Enums::OperationType const Flip;

/// @brief Field Goto value: I32(3)
static ::DG::Tweening::Core::Enums::OperationType const Goto;

/// @brief Field IsTweening value: I32(12)
static ::DG::Tweening::Core::Enums::OperationType const IsTweening;

/// @brief Field Pause value: I32(4)
static ::DG::Tweening::Core::Enums::OperationType const Pause;

/// @brief Field Play value: I32(5)
static ::DG::Tweening::Core::Enums::OperationType const Play;

/// @brief Field PlayBackwards value: I32(7)
static ::DG::Tweening::Core::Enums::OperationType const PlayBackwards;

/// @brief Field PlayForward value: I32(6)
static ::DG::Tweening::Core::Enums::OperationType const PlayForward;

/// @brief Field Restart value: I32(10)
static ::DG::Tweening::Core::Enums::OperationType const Restart;

/// @brief Field Rewind value: I32(8)
static ::DG::Tweening::Core::Enums::OperationType const Rewind;

/// @brief Field SmoothRewind value: I32(9)
static ::DG::Tweening::Core::Enums::OperationType const SmoothRewind;

/// @brief Field TogglePause value: I32(11)
static ::DG::Tweening::Core::Enums::OperationType const TogglePause;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10859};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::Enums::OperationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Enums::OperationType, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening::Core::Enums
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Enums::OperationType, "DG.Tweening.Core.Enums", "OperationType");
