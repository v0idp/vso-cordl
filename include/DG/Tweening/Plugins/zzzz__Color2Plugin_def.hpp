#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Color2Plugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__ColorOptions_def.hpp"
#include "DG/Tweening/zzzz__Color2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Color2Plugin)
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
struct Color2;
}
namespace DG::Tweening {
class Tween;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class Color2Plugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Color2Plugin);
// Dependencies DG.Tweening.Color2, DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.ColorOptions
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Color2Plugin
class CORDL_TYPE Color2Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18d6dac, size 0xc, virtual true, abstract: false, final false
inline ::DG::Tweening::Color2 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions>*  t, ::DG::Tweening::Color2  value) ;

/// @brief Method EvaluateAndApply, addr 0x18d6e1c, size 0x274, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::ColorOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>*  getter, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>*  setter, float_t  elapsed, ::DG::Tweening::Color2  startValue, ::DG::Tweening::Color2  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18d6e10, size 0xc, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::ColorOptions  options, float_t  unitsXSecond, ::DG::Tweening::Color2  changeValue) ;

static inline ::DG::Tweening::Plugins::Color2Plugin* New_ctor() ;

/// @brief Method Reset, addr 0x18d6b40, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18d6de4, size 0x2c, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18d6c94, size 0x118, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions>*  t, ::DG::Tweening::Color2  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18d6b44, size 0x150, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18d6db8, size 0x2c, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2,::DG::Tweening::Color2,::DG::Tweening::Plugins::Options::ColorOptions>*  t) ;

/// @brief Method .ctor, addr 0x18d7090, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Color2Plugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Color2Plugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Color2Plugin(Color2Plugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Color2Plugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Color2Plugin(Color2Plugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Color2Plugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::Color2Plugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Color2Plugin*, "DG.Tweening.Plugins", "Color2Plugin");
