#pragma once
// IWYU pragma private; include "DG/Tweening/DOVirtual.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DOVirtual)
namespace DG::Tweening {
class DOVirtual___c__DisplayClass0_0;
}
namespace DG::Tweening {
struct Ease;
}
namespace DG::Tweening {
template<typename T>
class TweenCallback_1;
}
namespace DG::Tweening {
class TweenCallback;
}
namespace DG::Tweening {
class Tween;
}
namespace DG::Tweening {
class Tweener;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace DG::Tweening {
class DOVirtual;
}
namespace DG::Tweening {
class DOVirtual___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOVirtual);
MARK_REF_PTR_T(::DG::Tweening::DOVirtual___c__DisplayClass0_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOVirtual/<>c__DisplayClass0_0
class CORDL_TYPE DOVirtual___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onVirtualUpdate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onVirtualUpdate, put=__cordl_internal_set_onVirtualUpdate)) ::DG::Tweening::TweenCallback_1<float_t>*  onVirtualUpdate;

/// @brief Field val, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_val, put=__cordl_internal_set_val)) float_t  val;

static inline ::DG::Tweening::DOVirtual___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <Float>b__0, addr 0x18c60b8, size 0x8, virtual false, abstract: false, final false
inline float_t _Float_b__0() ;

/// @brief Method <Float>b__1, addr 0x18c60c0, size 0x8, virtual false, abstract: false, final false
inline void _Float_b__1(float_t  x) ;

/// @brief Method <Float>b__2, addr 0x18c60c8, size 0x28, virtual false, abstract: false, final false
inline void _Float_b__2() ;

constexpr ::DG::Tweening::TweenCallback_1<float_t>* const& __cordl_internal_get_onVirtualUpdate() const;

constexpr ::DG::Tweening::TweenCallback_1<float_t>*& __cordl_internal_get_onVirtualUpdate() ;

constexpr float_t const& __cordl_internal_get_val() const;

constexpr float_t& __cordl_internal_get_val() ;

constexpr void __cordl_internal_set_onVirtualUpdate(::DG::Tweening::TweenCallback_1<float_t>*  value) ;

constexpr void __cordl_internal_set_val(float_t  value) ;

/// @brief Method .ctor, addr 0x18c5cf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOVirtual___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOVirtual___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOVirtual___c__DisplayClass0_0(DOVirtual___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOVirtual___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOVirtual___c__DisplayClass0_0(DOVirtual___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10691};

/// @brief Field val, offset: 0x10, size: 0x4, def value: None
 float_t  ___val;

/// @brief Field onVirtualUpdate, offset: 0x18, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback_1<float_t>*  ___onVirtualUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOVirtual___c__DisplayClass0_0, ___val) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOVirtual___c__DisplayClass0_0, ___onVirtualUpdate) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOVirtual___c__DisplayClass0_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOVirtual
class CORDL_TYPE DOVirtual : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::DG::Tweening::DOVirtual___c__DisplayClass0_0;

/// @brief Method DelayedCall, addr 0x18c5f9c, size 0xf0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tween* DelayedCall(float_t  delay, ::DG::Tweening::TweenCallback*  callback, bool  ignoreTimeScale) ;

/// @brief Method EasedValue, addr 0x18c5e84, size 0x118, virtual false, abstract: false, final false
static inline float_t EasedValue(float_t  from, float_t  to, float_t  lifetimePercentage, ::UnityEngine::AnimationCurve*  easeCurve) ;

/// @brief Method EasedValue, addr 0x18c5d00, size 0x9c, virtual false, abstract: false, final false
static inline float_t EasedValue(float_t  from, float_t  to, float_t  lifetimePercentage, ::DG::Tweening::Ease  easeType) ;

/// @brief Method EasedValue, addr 0x18c5e40, size 0x44, virtual false, abstract: false, final false
static inline float_t EasedValue(float_t  from, float_t  to, float_t  lifetimePercentage, ::DG::Tweening::Ease  easeType, float_t  amplitude, float_t  period) ;

/// @brief Method EasedValue, addr 0x18c5d9c, size 0xa4, virtual false, abstract: false, final false
static inline float_t EasedValue(float_t  from, float_t  to, float_t  lifetimePercentage, ::DG::Tweening::Ease  easeType, float_t  overshoot) ;

/// @brief Method Float, addr 0x18c5b38, size 0x1c0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* Float(float_t  from, float_t  to, float_t  duration, ::DG::Tweening::TweenCallback_1<float_t>*  onVirtualUpdate) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOVirtual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOVirtual", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOVirtual(DOVirtual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOVirtual", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOVirtual(DOVirtual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10692};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOVirtual, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOVirtual);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOVirtual*, "DG.Tweening", "DOVirtual");
NEED_NO_BOX(::DG::Tweening::DOVirtual___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOVirtual___c__DisplayClass0_0*, "DG.Tweening", "DOVirtual/<>c__DisplayClass0_0");
