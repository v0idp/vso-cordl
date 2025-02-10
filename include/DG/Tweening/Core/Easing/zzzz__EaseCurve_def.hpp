#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Easing/EaseCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EaseCurve)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace DG::Tweening::Core::Easing {
class EaseCurve;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::Easing::EaseCurve);
// Dependencies System.Object
namespace DG::Tweening::Core::Easing {
// Is value type: false
// CS Name: DG.Tweening.Core.Easing.EaseCurve
class CORDL_TYPE EaseCurve : public ::System::Object {
public:
// Declarations
/// @brief Field _animCurve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__animCurve, put=__cordl_internal_set__animCurve)) ::UnityEngine::AnimationCurve*  _animCurve;

/// @brief Method Evaluate, addr 0x18ed74c, size 0x9c, virtual false, abstract: false, final false
inline float_t Evaluate(float_t  time, float_t  duration, float_t  unusedOvershoot, float_t  unusedPeriod) ;

static inline ::DG::Tweening::Core::Easing::EaseCurve* New_ctor(::UnityEngine::AnimationCurve*  animCurve) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animCurve() ;

constexpr void __cordl_internal_set__animCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x18ed724, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AnimationCurve*  animCurve) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EaseCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EaseCurve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EaseCurve(EaseCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EaseCurve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EaseCurve(EaseCurve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10867};

/// @brief Field _animCurve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::Easing::EaseCurve, ____animCurve) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Easing::EaseCurve, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening::Core::Easing
NEED_NO_BOX(::DG::Tweening::Core::Easing::EaseCurve);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Easing::EaseCurve*, "DG.Tweening.Core.Easing", "EaseCurve");
