#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/PathPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__PathOptions_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PathPlugin)
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
namespace DG::Tweening::Plugins::Core::PathCore {
class Path;
}
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugOptions>
class ABSTweenPlugin_3;
}
namespace DG::Tweening::Plugins::Options {
struct PathOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class PathPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::PathPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.PathOptions, UnityEngine.Vector3
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.PathPlugin
class CORDL_TYPE PathPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18d86c8, size 0x18, virtual true, abstract: false, final false
inline ::DG::Tweening::Plugins::Core::PathCore::Path* ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, ::UnityEngine::Vector3  value) ;

/// @brief Method EvaluateAndApply, addr 0x18d8c18, size 0x294, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::PathOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, float_t  elapsed, ::DG::Tweening::Plugins::Core::PathCore::Path*  startValue, ::DG::Tweening::Plugins::Core::PathCore::Path*  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method Get, addr 0x18d8688, size 0x40, virtual false, abstract: false, final false
static inline ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* Get() ;

/// @brief Method GetSpeedBasedDuration, addr 0x18d8bfc, size 0x1c, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::PathOptions  options, float_t  unitsXSecond, ::DG::Tweening::Plugins::Core::PathCore::Path*  changeValue) ;

static inline ::DG::Tweening::Plugins::PathPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18d8538, size 0x2c, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18d8798, size 0x3c0, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18d8684, size 0x4, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, ::DG::Tweening::Plugins::Core::PathCore::Path*  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18d8680, size 0x4, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, bool  isRelative) ;

/// @brief Method SetOrientation, addr 0x18d9458, size 0x8f0, virtual false, abstract: false, final false
inline void SetOrientation(::DG::Tweening::Plugins::Options::PathOptions  options, ::DG::Tweening::Tween*  t, ::DG::Tweening::Plugins::Core::PathCore::Path*  path, float_t  pathPerc, ::UnityEngine::Vector3  tPos, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method SetRelativeEndValue, addr 0x18d86e0, size 0xb8, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t) ;

/// @brief Method .ctor, addr 0x18d9ed0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PathPlugin(PathPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathPlugin(PathPlugin const& ) = delete;

/// @brief Field MinLookAhead offset 0xffffffff size 0x4
static constexpr float_t  MinLookAhead{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10794};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::PathPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::PathPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::PathPlugin*, "DG.Tweening.Plugins", "PathPlugin");
