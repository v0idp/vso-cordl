#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/UintPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__UintOptions_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UintPlugin)
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
struct UintOptions;
}
namespace DG::Tweening {
class Tween;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class UintPlugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::UintPlugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.UintOptions
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.UintPlugin
class CORDL_TYPE UintPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18dc944, size 0x8, virtual true, abstract: false, final false
inline uint32_t ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions>*  t, uint32_t  value) ;

/// @brief Method EvaluateAndApply, addr 0x18dc9bc, size 0x1e0, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::UintOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<uint32_t>*  getter, ::DG::Tweening::Core::DOSetter_1<uint32_t>*  setter, float_t  elapsed, uint32_t  startValue, uint32_t  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18dc9a4, size 0x18, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::UintOptions  options, float_t  unitsXSecond, uint32_t  changeValue) ;

static inline ::DG::Tweening::Plugins::UintPlugin* New_ctor() ;

/// @brief Method Reset, addr 0x18dc898, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18dc970, size 0x34, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18dc904, size 0x40, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions>*  t, uint32_t  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18dc89c, size 0x68, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18dc94c, size 0x24, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<uint32_t,uint32_t,::DG::Tweening::Plugins::Options::UintOptions>*  t) ;

/// @brief Method .ctor, addr 0x18dcb9c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UintPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UintPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UintPlugin(UintPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UintPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UintPlugin(UintPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::UintPlugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::UintPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::UintPlugin*, "DG.Tweening.Plugins", "UintPlugin");
