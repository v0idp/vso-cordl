#pragma once
// IWYU pragma private; include "DG/Tweening/LinkBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkBehaviour)
// Forward declare root types
namespace DG::Tweening {
struct LinkBehaviour;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::LinkBehaviour);
// Dependencies 
namespace DG::Tweening {
// Is value type: true
// CS Name: DG.Tweening.LinkBehaviour
struct CORDL_TYPE LinkBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LinkBehaviour_Unwrapped
enum struct __LinkBehaviour_Unwrapped : int32_t {
__E_PauseOnDisable = static_cast<int32_t>(0x0),
__E_PauseOnDisablePlayOnEnable = static_cast<int32_t>(0x1),
__E_PauseOnDisableRestartOnEnable = static_cast<int32_t>(0x2),
__E_PlayOnEnable = static_cast<int32_t>(0x3),
__E_RestartOnEnable = static_cast<int32_t>(0x4),
__E_KillOnDisable = static_cast<int32_t>(0x5),
__E_KillOnDestroy = static_cast<int32_t>(0x6),
__E_CompleteOnDisable = static_cast<int32_t>(0x7),
__E_CompleteAndKillOnDisable = static_cast<int32_t>(0x8),
__E_RewindOnDisable = static_cast<int32_t>(0x9),
__E_RewindAndKillOnDisable = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LinkBehaviour_Unwrapped () const noexcept {
return static_cast<__LinkBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LinkBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LinkBehaviour(int32_t  value__) noexcept;

/// @brief Field CompleteAndKillOnDisable value: I32(8)
static ::DG::Tweening::LinkBehaviour const CompleteAndKillOnDisable;

/// @brief Field CompleteOnDisable value: I32(7)
static ::DG::Tweening::LinkBehaviour const CompleteOnDisable;

/// @brief Field KillOnDestroy value: I32(6)
static ::DG::Tweening::LinkBehaviour const KillOnDestroy;

/// @brief Field KillOnDisable value: I32(5)
static ::DG::Tweening::LinkBehaviour const KillOnDisable;

/// @brief Field PauseOnDisable value: I32(0)
static ::DG::Tweening::LinkBehaviour const PauseOnDisable;

/// @brief Field PauseOnDisablePlayOnEnable value: I32(1)
static ::DG::Tweening::LinkBehaviour const PauseOnDisablePlayOnEnable;

/// @brief Field PauseOnDisableRestartOnEnable value: I32(2)
static ::DG::Tweening::LinkBehaviour const PauseOnDisableRestartOnEnable;

/// @brief Field PlayOnEnable value: I32(3)
static ::DG::Tweening::LinkBehaviour const PlayOnEnable;

/// @brief Field RestartOnEnable value: I32(4)
static ::DG::Tweening::LinkBehaviour const RestartOnEnable;

/// @brief Field RewindAndKillOnDisable value: I32(10)
static ::DG::Tweening::LinkBehaviour const RewindAndKillOnDisable;

/// @brief Field RewindOnDisable value: I32(9)
static ::DG::Tweening::LinkBehaviour const RewindOnDisable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10697};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::LinkBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::LinkBehaviour, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::LinkBehaviour, "DG.Tweening", "LinkBehaviour");
