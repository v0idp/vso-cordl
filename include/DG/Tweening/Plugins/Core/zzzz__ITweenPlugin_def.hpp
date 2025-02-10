#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/ITweenPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITweenPlugin)
// Forward declare root types
namespace DG::Tweening::Plugins::Core {
class ITweenPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Core::ITweenPlugin);
// Dependencies 
namespace DG::Tweening::Plugins::Core {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.ITweenPlugin
class CORDL_TYPE ITweenPlugin {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "ITweenPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITweenPlugin(ITweenPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening::Plugins::Core
NEED_NO_BOX(::DG::Tweening::Plugins::Core::ITweenPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::ITweenPlugin*, "DG.Tweening.Plugins.Core", "ITweenPlugin");
