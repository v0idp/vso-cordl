#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/FloatPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__FloatOptions_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatPlugin)
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
struct FloatOptions;
}
namespace DG::Tweening {
class Tween;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class FloatPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::FloatPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.FloatOptions
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.FloatPlugin
class CORDL_TYPE FloatPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18df918, size 0x4, virtual true, abstract: false, final false
inline float_t ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>*  t, float_t  value) ;

/// @brief Method EvaluateAndApply, addr 0x18df978, size 0x1b8, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::FloatOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<float_t>*  getter, ::DG::Tweening::Core::DOSetter_1<float_t>*  setter, float_t  elapsed, float_t  startValue, float_t  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18df964, size 0x14, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::FloatOptions  options, float_t  unitsXSecond, float_t  changeValue) ;

static inline ::DG::Tweening::Plugins::FloatPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18df6cc, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18df940, size 0x24, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18df7fc, size 0x11c, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>*  t, float_t  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18df6d0, size 0x12c, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18df91c, size 0x24, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>*  t) ;

/// @brief Method .ctor, addr 0x18dfb30, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatPlugin(FloatPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatPlugin(FloatPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10805};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::FloatPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::FloatPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::FloatPlugin*, "DG.Tweening.Plugins", "FloatPlugin");
