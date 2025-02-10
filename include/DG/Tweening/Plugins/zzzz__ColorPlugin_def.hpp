#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/ColorPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__ColorOptions_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorPlugin)
namespace DG::Tweening::Core::Enums {
struct UpdateNotice;
}
namespace DG::Tweening::Core {
template<typename T>
class DOGetter_1;
}
namespace DG::Tweening::Core {
template<typename T>
class DOSetter_1;
}
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct ColorOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class ColorPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::ColorPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.ColorOptions, UnityEngine.Color
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.ColorPlugin
class CORDL_TYPE ColorPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18da074, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Color ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t, ::UnityEngine::Color  value) ;

/// @brief Method EvaluateAndApply, addr 0x18da0cc, size 0x19c, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::ColorOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>*  setter, float_t  elapsed, ::UnityEngine::Color  startValue, ::UnityEngine::Color  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18da0c0, size 0xc, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::ColorOptions  options, float_t  unitsXSecond, ::UnityEngine::Color  changeValue) ;

static inline ::DG::Tweening::Plugins::ColorPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18d9f18, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18da09c, size 0x24, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18d9ff8, size 0x7c, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t, ::UnityEngine::Color  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18d9f1c, size 0xdc, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18da078, size 0x24, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t) ;

/// @brief Method .ctor, addr 0x18da268, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorPlugin(ColorPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorPlugin(ColorPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::ColorPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::ColorPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::ColorPlugin*, "DG.Tweening.Plugins", "ColorPlugin");
