#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/IPlugOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlugOptions)
// Forward declare root types
namespace DG::Tweening::Plugins::Options {
class IPlugOptions;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Options::IPlugOptions);
// Dependencies 
namespace DG::Tweening::Plugins::Options {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Options.IPlugOptions
class CORDL_TYPE IPlugOptions {
public:
// Declarations
/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "IPlugOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlugOptions(IPlugOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening::Plugins::Options
NEED_NO_BOX(::DG::Tweening::Plugins::Options::IPlugOptions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::IPlugOptions*, "DG.Tweening.Plugins.Options", "IPlugOptions");
