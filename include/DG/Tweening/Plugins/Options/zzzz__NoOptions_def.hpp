#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/NoOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NoOptions)
// Forward declare root types
namespace DG::Tweening::Plugins::Options {
struct NoOptions;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Plugins::Options::NoOptions);
// Dependencies DG.Tweening.Plugins.Options.IPlugOptions
namespace DG::Tweening::Plugins::Options {
// Is value type: true
// CS Name: DG.Tweening.Plugins.Options.NoOptions
#pragma pack(push, 0)
struct CORDL_TYPE NoOptions {
public:
// Declarations
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr operator  ::DG::Tweening::Plugins::Options::IPlugOptions*() ;

/// @brief Method Reset, addr 0x18e08ec, size 0x4, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* i___DG__Tweening__Plugins__Options__IPlugOptions() ;

// Ctor Parameters []
// @brief default ctor
constexpr NoOptions() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Options::NoOptions, 0x1>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Options
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::NoOptions, "DG.Tweening.Plugins.Options", "NoOptions");
