#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/QuaternionPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__QuaternionOptions_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuaternionPlugin)
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
struct QuaternionOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class QuaternionPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::QuaternionPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.QuaternionOptions, UnityEngine.Quaternion, UnityEngine.Vector3
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.QuaternionPlugin
class CORDL_TYPE QuaternionPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18da9d4, size 0x2c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t, ::UnityEngine::Quaternion  value) ;

/// @brief Method EvaluateAndApply, addr 0x18dac64, size 0x42c, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::QuaternionOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>*  setter, float_t  elapsed, ::UnityEngine::Vector3  startValue, ::UnityEngine::Vector3  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18dabe4, size 0x80, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::QuaternionOptions  options, float_t  unitsXSecond, ::UnityEngine::Vector3  changeValue) ;

static inline ::DG::Tweening::Plugins::QuaternionPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18da5bc, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18daa38, size 0x1ac, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18da978, size 0x5c, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t, ::UnityEngine::Vector3  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18da5c0, size 0x3b8, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18daa00, size 0x38, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t) ;

/// @brief Method .ctor, addr 0x18db090, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuaternionPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuaternionPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuaternionPlugin(QuaternionPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuaternionPlugin(QuaternionPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10797};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::QuaternionPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::QuaternionPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::QuaternionPlugin*, "DG.Tweening.Plugins", "QuaternionPlugin");
