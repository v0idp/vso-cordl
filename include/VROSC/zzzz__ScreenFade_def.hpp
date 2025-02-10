#pragma once
// IWYU pragma private; include "VROSC/ScreenFade.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScreenFade)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class ScreenFade;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScreenFade);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScreenFade
class CORDL_TYPE ScreenFade : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IsFading, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_IsFading, put=__cordl_internal_set_IsFading)) ::System::Action_2<bool,::UnityEngine::Color>*  IsFading;

/// @brief Field OnColor, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColor, put=__cordl_internal_set_OnColor)) ::System::Action_1<::UnityEngine::Color>*  OnColor;

 __declspec(property(get=get_Progress, put=set_Progress)) float_t  Progress;

/// @brief Field <Progress>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Progress_k__BackingField, put=__cordl_internal_set__Progress_k__BackingField)) float_t  _Progress_k__BackingField;

/// @brief Field _adjustableMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

/// @brief Field _currentColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentColor, put=__cordl_internal_set__currentColor)) ::UnityEngine::Color  _currentColor;

/// @brief Field _duration, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _fadeCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeCurve, put=__cordl_internal_set__fadeCurve)) ::UnityEngine::AnimationCurve*  _fadeCurve;

/// @brief Field _startColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__startColor, put=__cordl_internal_set__startColor)) ::UnityEngine::Color  _startColor;

/// @brief Field _targetColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetColor, put=__cordl_internal_set__targetColor)) ::UnityEngine::Color  _targetColor;

/// @brief Method Awake, addr 0x17ba47c, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Fade, addr 0x17ba4f0, size 0x24, virtual false, abstract: false, final false
inline void Fade(::UnityEngine::Color  targetColor, float_t  duration, ::UnityEngine::AnimationCurve*  fadeCurve) ;

/// @brief Method LateUpdate, addr 0x17ba648, size 0xc4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::ScreenFade* New_ctor() ;

/// @brief Method SetActive, addr 0x17ba484, size 0x6c, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetColor, addr 0x17ba514, size 0x134, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color, bool  alphaCheck) ;

constexpr ::System::Action_2<bool,::UnityEngine::Color>* const& __cordl_internal_get_IsFading() const;

constexpr ::System::Action_2<bool,::UnityEngine::Color>*& __cordl_internal_get_IsFading() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnColor() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnColor() ;

constexpr float_t const& __cordl_internal_get__Progress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Progress_k__BackingField() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentColor() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeCurve() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__targetColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__targetColor() ;

constexpr void __cordl_internal_set_IsFading(::System::Action_2<bool,::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_OnColor(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__Progress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__currentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__fadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__startColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__targetColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17ba70c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Progress, addr 0x17ba474, size 0x8, virtual false, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Method set_Progress, addr 0x17ba46c, size 0x8, virtual false, abstract: false, final false
inline void set_Progress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenFade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenFade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenFade(ScreenFade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenFade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenFade(ScreenFade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1476};

/// @brief Field <Progress>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____Progress_k__BackingField;

/// @brief Field _adjustableMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

/// @brief Field _targetColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____targetColor;

/// @brief Field _startColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor;

/// @brief Field _currentColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentColor;

/// @brief Field _fadeCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____fadeCurve;

/// @brief Field _duration, offset: 0x68, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field OnColor, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnColor;

/// @brief Field IsFading, offset: 0x78, size: 0x8, def value: None
 ::System::Action_2<bool,::UnityEngine::Color>*  ___IsFading;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScreenFade, ____Progress_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ____adjustableMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ____targetColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ____startColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ____currentColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ____fadeCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ____duration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ___OnColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScreenFade, ___IsFading) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScreenFade, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScreenFade);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScreenFade*, "VROSC", "ScreenFade");
