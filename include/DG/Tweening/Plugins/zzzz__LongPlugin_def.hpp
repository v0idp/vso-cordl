#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/LongPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__NoOptions_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LongPlugin)
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
// Forward declare root types
namespace DG::Tweening::Plugins {
class LongPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::LongPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.NoOptions
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.LongPlugin
class CORDL_TYPE LongPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18d73a8, size 0x8, virtual true, abstract: false, final false
inline int64_t ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions>*  t, int64_t  value) ;

/// @brief Method EvaluateAndApply, addr 0x18d7408, size 0x1b8, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<int64_t>*  getter, ::DG::Tweening::Core::DOSetter_1<int64_t>*  setter, float_t  elapsed, int64_t  startValue, int64_t  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18d73f0, size 0x18, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions  options, float_t  unitsXSecond, int64_t  changeValue) ;

static inline ::DG::Tweening::Plugins::LongPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18d7300, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18d73d0, size 0x20, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18d7368, size 0x40, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions>*  t, int64_t  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18d7304, size 0x64, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18d73b0, size 0x20, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<int64_t,int64_t,::DG::Tweening::Plugins::Options::NoOptions>*  t) ;

/// @brief Method .ctor, addr 0x18d75c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LongPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LongPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LongPlugin(LongPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LongPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LongPlugin(LongPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::LongPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::LongPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::LongPlugin*, "DG.Tweening.Plugins", "LongPlugin");
