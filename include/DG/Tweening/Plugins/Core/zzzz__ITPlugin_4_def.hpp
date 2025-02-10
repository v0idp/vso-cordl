#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/ITPlugin_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITPlugin_4)
// Forward declare root types
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugOptions,typename TPlugin>
class ITPlugin_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::DG::Tweening::Plugins::Core::ITPlugin_4);
// Dependencies 
namespace DG::Tweening::Plugins::Core {
// cpp template
template<typename T1,typename T2,typename TPlugOptions,typename TPlugin>
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.ITPlugin`4<T1,T2,TPlugOptions,TPlugin>
class CORDL_TYPE ITPlugin_4 {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "ITPlugin_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITPlugin_4(ITPlugin_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening::Plugins::Core
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::DG::Tweening::Plugins::Core::ITPlugin_4, "DG.Tweening.Plugins.Core", "ITPlugin`4");
