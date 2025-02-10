#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/ABSTweenPlugin_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ITweenPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ABSTweenPlugin_3)
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
namespace DG::Tweening {
class Tween;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugOptions>
class ABSTweenPlugin_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::DG::Tweening::Plugins::Core::ABSTweenPlugin_3);
// Dependencies DG.Tweening.Plugins.Core.ITweenPlugin, System.Object
namespace DG::Tweening::Plugins::Core {
// cpp template
template<typename T1,typename T2,typename TPlugOptions>
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>
class CORDL_TYPE ABSTweenPlugin_3 : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::DG::Tweening::Plugins::Core::ITweenPlugin"
constexpr operator  ::DG::Tweening::Plugins::Core::ITweenPlugin*() noexcept;

/// @brief Method ConvertToStartValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T2 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T1  value) ;

/// @brief Method EvaluateAndApply, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EvaluateAndApply(TPlugOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<T1>*  getter, ::DG::Tweening::Core::DOSetter_1<T1>*  setter, float_t  elapsed, T2  startValue, T2  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(TPlugOptions  options, float_t  unitsXSecond, T2  changeValue) ;

static inline ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>* New_ctor() ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method SetFrom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T2  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DG::Tweening::Plugins::Core::ITweenPlugin"
constexpr ::DG::Tweening::Plugins::Core::ITweenPlugin* i___DG__Tweening__Plugins__Core__ITweenPlugin() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ABSTweenPlugin_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ABSTweenPlugin_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ABSTweenPlugin_3(ABSTweenPlugin_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ABSTweenPlugin_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ABSTweenPlugin_3(ABSTweenPlugin_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening::Plugins::Core
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::DG::Tweening::Plugins::Core::ABSTweenPlugin_3, "DG.Tweening.Plugins.Core", "ABSTweenPlugin`3");
