#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Vector3Plugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__VectorOptions_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Plugin)
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
struct VectorOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Plugins {
class Vector3Plugin;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Vector3Plugin);
// Dependencies DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1, T2, TPlugOptions>, DG.Tweening.Plugins.Options.VectorOptions, UnityEngine.Vector3
namespace DG::Tweening::Plugins {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Vector3Plugin
class CORDL_TYPE Vector3Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions> {
public:
// Declarations
/// @brief Method ConvertToStartValue, addr 0x18e0098, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t, ::UnityEngine::Vector3  value) ;

/// @brief Method EvaluateAndApply, addr 0x18e01f8, size 0x57c, virtual true, abstract: false, final false
inline void EvaluateAndApply(::DG::Tweening::Plugins::Options::VectorOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*  getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*  setter, float_t  elapsed, ::UnityEngine::Vector3  startValue, ::UnityEngine::Vector3  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice) ;

/// @brief Method GetSpeedBasedDuration, addr 0x18e0178, size 0x80, virtual true, abstract: false, final false
inline float_t GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::VectorOptions  options, float_t  unitsXSecond, ::UnityEngine::Vector3  changeValue) ;

static inline ::DG::Tweening::Plugins::Vector3Plugin* New_ctor() ;

/// @brief Method Reset, addr 0x18dfb78, size 0x4, virtual true, abstract: false, final false
inline void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t) ;

/// @brief Method SetChangeValue, addr 0x18e00d4, size 0xa4, virtual true, abstract: false, final false
inline void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t) ;

/// @brief Method SetFrom, addr 0x18dfdf8, size 0x2a0, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t, ::UnityEngine::Vector3  fromValue, bool  setImmediately) ;

/// @brief Method SetFrom, addr 0x18dfb7c, size 0x27c, virtual true, abstract: false, final false
inline void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t, bool  isRelative) ;

/// @brief Method SetRelativeEndValue, addr 0x18e009c, size 0x38, virtual true, abstract: false, final false
inline void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t) ;

/// @brief Method .ctor, addr 0x18e0774, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector3Plugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector3Plugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3Plugin(Vector3Plugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Plugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3Plugin(Vector3Plugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Vector3Plugin, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins
NEED_NO_BOX(::DG::Tweening::Plugins::Vector3Plugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Vector3Plugin*, "DG.Tweening.Plugins", "Vector3Plugin");
