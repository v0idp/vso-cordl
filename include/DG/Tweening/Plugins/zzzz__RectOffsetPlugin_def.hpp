#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/RectOffsetPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__NoOptions_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RectOffsetPlugin)
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
class RectOffset;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class RectOffsetPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::RectOffsetPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.NoOptions
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.RectOffsetPlugin
class CORDL_TYPE RectOffsetPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::RectOffset*,::UnityEngine::RectOffset*,::DG::Tweening::Plugins::Options::NoOptions> {
public:
// Declarations
/// @brief Field _r, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__r, put=setStaticF__r)) ::UnityEngine::RectOffset*  _r;

/// @brief Method ConvertToStartValue, addr 0x18db280, size 0xbc, virtual true, abstract: false, final false
inline ::UnityEngine::RectOffset* ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*,::UnityEngine::RectOffset*,::DG::Tweening::Plugins::Options::NoOptions>*  t, ::UnityEngine::RectOffset*  value) ;

/// @brief Method EvaluateAndApply, addr 0x18db654, size 0x724, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::RectOffset*>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::RectOffset*>*  setter, float_t  elapsed, ::UnityEngine::RectOffset*  startValue, ::UnityEngine::RectOffset*  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18db598, size 0xbc, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions  options, float_t  unitsXSecond, ::UnityEngine::RectOffset*  changeValue) ;

static inline ::DG::Tweening::Plugins::RectOffsetPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18db0d8, size 0x1c, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*,::UnityEngine::RectOffset*,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18db448, size 0x150, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*,::UnityEngine::RectOffset*,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18db240, size 0x40, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*,::UnityEngine::RectOffset*,::DG::Tweening::Plugins::Options::NoOptions>*  t, ::UnityEngine::RectOffset*  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18db0f4, size 0x14c, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*,::UnityEngine::RectOffset*,::DG::Tweening::Plugins::Options::NoOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18db33c, size 0x10c, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*,::UnityEngine::RectOffset*,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method .ctor, addr 0x18dbd78, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::RectOffset* getStaticF__r() ;

static inline void setStaticF__r(::UnityEngine::RectOffset*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectOffsetPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectOffsetPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RectOffsetPlugin(RectOffsetPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectOffsetPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectOffsetPlugin(RectOffsetPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10798};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::RectOffsetPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::RectOffsetPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::RectOffsetPlugin*, "DG.Tweening.Plugins", "RectOffsetPlugin");
