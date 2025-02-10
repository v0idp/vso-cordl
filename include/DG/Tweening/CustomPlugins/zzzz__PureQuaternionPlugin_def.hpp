#pragma once
// IWYU pragma private; include "DG/Tweening/CustomPlugins/PureQuaternionPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__NoOptions_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PureQuaternionPlugin)
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
struct NoOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace DG::Tweening::CustomPlugins {
class PureQuaternionPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::CustomPlugins::PureQuaternionPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.NoOptions, UnityEngine.Quaternion
namespace DG::Tweening::CustomPlugins {
// Is value type: false
// CS Name: DG.Tweening.CustomPlugins.PureQuaternionPlugin
class CORDL_TYPE PureQuaternionPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Quaternion,::UnityEngine::Quaternion,::DG::Tweening::Plugins::Options::NoOptions> {
public:
// Declarations
/// @brief Field _plug, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__plug, put=setStaticF__plug)) ::DG::Tweening::CustomPlugins::PureQuaternionPlugin*  _plug;

/// @brief Method ConvertToStartValue, addr 0x18e35a4, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Quaternion,::DG::Tweening::Plugins::Options::NoOptions>*  t, ::UnityEngine::Quaternion  value) ;

/// @brief Method EvaluateAndApply, addr 0x18e3734, size 0xac, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>*  setter, float_t  elapsed, ::UnityEngine::Quaternion  startValue, ::UnityEngine::Quaternion  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18e3680, size 0xb4, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions  options, float_t  unitsXSecond, ::UnityEngine::Quaternion  changeValue) ;

static inline ::DG::Tweening::CustomPlugins::PureQuaternionPlugin* New_ctor() ;

/// @brief Method Plug, addr 0x18e338c, size 0x74, virtual false, abstract: false, final false
static inline ::DG::Tweening::CustomPlugins::PureQuaternionPlugin* Plug() ;

/// @brief Method Reset, addr 0x18e3448, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Quaternion,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18e365c, size 0x24, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Quaternion,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18e3560, size 0x44, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Quaternion,::DG::Tweening::Plugins::Options::NoOptions>*  t, ::UnityEngine::Quaternion  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18e344c, size 0x114, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Quaternion,::DG::Tweening::Plugins::Options::NoOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18e35a8, size 0xb4, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Quaternion,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method .ctor, addr 0x18e3400, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::DG::Tweening::CustomPlugins::PureQuaternionPlugin* getStaticF__plug() ;

static inline void setStaticF__plug(::DG::Tweening::CustomPlugins::PureQuaternionPlugin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PureQuaternionPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PureQuaternionPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PureQuaternionPlugin(PureQuaternionPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PureQuaternionPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PureQuaternionPlugin(PureQuaternionPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::CustomPlugins::PureQuaternionPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::CustomPlugins
NEED_NO_BOX(::DG::Tweening::CustomPlugins::PureQuaternionPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::CustomPlugins::PureQuaternionPlugin*, "DG.Tweening.CustomPlugins", "PureQuaternionPlugin");
