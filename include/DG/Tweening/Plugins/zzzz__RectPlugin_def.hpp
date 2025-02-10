#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/RectPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__RectOptions_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RectPlugin)
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
struct RectOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class RectPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::RectPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.RectOptions, UnityEngine.Rect
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.RectPlugin
class CORDL_TYPE RectPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18dc3d4, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Rect ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>*  t, ::UnityEngine::Rect  value) ;

/// @brief Method EvaluateAndApply, addr 0x18dc49c, size 0x3b4, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::RectOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Rect>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Rect>*  setter, float_t  elapsed, ::UnityEngine::Rect  startValue, ::UnityEngine::Rect  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18dc420, size 0x7c, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::RectOptions  options, float_t  unitsXSecond, ::UnityEngine::Rect  changeValue) ;

static inline ::DG::Tweening::Plugins::RectPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18dbe30, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18dc3fc, size 0x24, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18dc12c, size 0x2a8, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>*  t, ::UnityEngine::Rect  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18dbe34, size 0x2f8, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18dc3d8, size 0x24, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>*  t) ;

/// @brief Method .ctor, addr 0x18dc850, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RectPlugin(RectPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectPlugin(RectPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::RectPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::RectPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::RectPlugin*, "DG.Tweening.Plugins", "RectPlugin");
