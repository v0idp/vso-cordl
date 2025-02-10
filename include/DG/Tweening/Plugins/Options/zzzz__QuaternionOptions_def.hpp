#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/QuaternionOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_def.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_def.hpp"
#include "DG/Tweening/zzzz__RotateMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QuaternionOptions)
// Forward declare root types
namespace DG::Tweening::Plugins::Options {
struct QuaternionOptions;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Plugins::Options::QuaternionOptions);
// Dependencies DG.Tweening.AxisConstraint, DG.Tweening.Plugins.Options.IPlugOptions, DG.Tweening.RotateMode, UnityEngine.Vector3
namespace DG::Tweening::Plugins::Options {
// Is value type: true
// CS Name: DG.Tweening.Plugins.Options.QuaternionOptions
struct CORDL_TYPE QuaternionOptions {
public:
// Declarations
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr operator  ::DG::Tweening::Plugins::Options::IPlugOptions*() ;

/// @brief Method Reset, addr 0x18e0878, size 0x5c, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* i___DG__Tweening__Plugins__Options__IPlugOptions() ;

// Ctor Parameters []
// @brief default ctor
constexpr QuaternionOptions() ;

// Ctor Parameters [CppParam { name: "rotateMode", ty: "::DG::Tweening::RotateMode", modifiers: "", def_value: None }, CppParam { name: "axisConstraint", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: None }, CppParam { name: "up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr QuaternionOptions(::DG::Tweening::RotateMode  rotateMode, ::DG::Tweening::AxisConstraint  axisConstraint, ::UnityEngine::Vector3  up) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field rotateMode, offset: 0x0, size: 0x4, def value: None
 ::DG::Tweening::RotateMode  rotateMode;

/// @brief Field axisConstraint, offset: 0x4, size: 0x4, def value: None
 ::DG::Tweening::AxisConstraint  axisConstraint;

/// @brief Field up, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  up;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Plugins::Options::QuaternionOptions, rotateMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::QuaternionOptions, axisConstraint) == 0x4, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::QuaternionOptions, up) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Options::QuaternionOptions, 0x14>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Options
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::QuaternionOptions, "DG.Tweening.Plugins.Options", "QuaternionOptions");
