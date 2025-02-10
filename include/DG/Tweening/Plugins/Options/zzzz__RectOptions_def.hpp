#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/RectOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RectOptions)
// Forward declare root types
namespace DG::Tweening::Plugins::Options {
struct RectOptions;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Plugins::Options::RectOptions);
// Dependencies DG.Tweening.Plugins.Options.IPlugOptions
namespace DG::Tweening::Plugins::Options {
// Is value type: true
// CS Name: DG.Tweening.Plugins.Options.RectOptions
struct CORDL_TYPE RectOptions {
public:
// Declarations
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr operator  ::DG::Tweening::Plugins::Options::IPlugOptions*() ;

/// @brief Method Reset, addr 0x18e0900, size 0x8, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* i___DG__Tweening__Plugins__Options__IPlugOptions() ;

// Ctor Parameters []
// @brief default ctor
constexpr RectOptions() ;

// Ctor Parameters [CppParam { name: "snapping", ty: "bool", modifiers: "", def_value: None }]
constexpr RectOptions(bool  snapping) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10816};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field snapping, offset: 0x0, size: 0x1, def value: None
 bool  snapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Plugins::Options::RectOptions, snapping) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Options::RectOptions, 0x1>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Options
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::RectOptions, "DG.Tweening.Plugins.Options", "RectOptions");
