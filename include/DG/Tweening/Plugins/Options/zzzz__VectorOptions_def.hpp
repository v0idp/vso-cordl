#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/VectorOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_def.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VectorOptions)
// Forward declare root types
namespace DG::Tweening::Plugins::Options {
struct VectorOptions;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Plugins::Options::VectorOptions);
// Dependencies DG.Tweening.AxisConstraint, DG.Tweening.Plugins.Options.IPlugOptions
namespace DG::Tweening::Plugins::Options {
// Is value type: true
// CS Name: DG.Tweening.Plugins.Options.VectorOptions
struct CORDL_TYPE VectorOptions {
public:
// Declarations
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr operator  ::DG::Tweening::Plugins::Options::IPlugOptions*() ;

/// @brief Method Reset, addr 0x18e091c, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* i___DG__Tweening__Plugins__Options__IPlugOptions() ;

// Ctor Parameters []
// @brief default ctor
constexpr VectorOptions() ;

// Ctor Parameters [CppParam { name: "axisConstraint", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: None }, CppParam { name: "snapping", ty: "bool", modifiers: "", def_value: None }]
constexpr VectorOptions(::DG::Tweening::AxisConstraint  axisConstraint, bool  snapping) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field axisConstraint, offset: 0x0, size: 0x4, def value: None
 ::DG::Tweening::AxisConstraint  axisConstraint;

/// @brief Field snapping, offset: 0x4, size: 0x1, def value: None
 bool  snapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Plugins::Options::VectorOptions, axisConstraint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::VectorOptions, snapping) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Options::VectorOptions, 0x8>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Options
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::VectorOptions, "DG.Tweening.Plugins.Options", "VectorOptions");
