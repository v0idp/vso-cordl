#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModuleSprite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DOTweenModuleSprite)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct ColorOptions;
}
namespace DG::Tweening {
class DOTweenModuleSprite___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModuleSprite___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModuleSprite___c__DisplayClass3_0;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
class Tweener;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenModuleSprite;
}
namespace DG::Tweening {
class DOTweenModuleSprite___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModuleSprite___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModuleSprite___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleSprite);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass0_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass1_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0
class CORDL_TYPE DOTweenModuleSprite___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::SpriteRenderer>  target;

static inline ::DG::Tweening::DOTweenModuleSprite___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <DOColor>b__0, addr 0x16afcdc, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOColor_b__0() ;

/// @brief Method <DOColor>b__1, addr 0x16afcf8, size 0x1c, virtual false, abstract: false, final false
inline void _DOColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

/// @brief Method .ctor, addr 0x16af798, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleSprite___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleSprite___c__DisplayClass0_0(DOTweenModuleSprite___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleSprite___c__DisplayClass0_0(DOTweenModuleSprite___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11752};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass0_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleSprite___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0
class CORDL_TYPE DOTweenModuleSprite___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::SpriteRenderer>  target;

static inline ::DG::Tweening::DOTweenModuleSprite___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <DOFade>b__0, addr 0x16afd14, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOFade_b__0() ;

/// @brief Method <DOFade>b__1, addr 0x16afd30, size 0x1c, virtual false, abstract: false, final false
inline void _DOFade_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

/// @brief Method .ctor, addr 0x16af90c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleSprite___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleSprite___c__DisplayClass1_0(DOTweenModuleSprite___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleSprite___c__DisplayClass1_0(DOTweenModuleSprite___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11753};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass1_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleSprite___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object, UnityEngine.Color
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0
class CORDL_TYPE DOTweenModuleSprite___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::SpriteRenderer>  target;

/// @brief Field to, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityEngine::Color  to;

static inline ::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <DOBlendableColor>b__0, addr 0x16afd4c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOBlendableColor_b__0() ;

/// @brief Method <DOBlendableColor>b__1, addr 0x16afd58, size 0x6c, virtual false, abstract: false, final false
inline void _DOBlendableColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_to() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_to(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x16afcd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleSprite___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleSprite___c__DisplayClass3_0(DOTweenModuleSprite___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleSprite___c__DisplayClass3_0(DOTweenModuleSprite___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11754};

/// @brief Field to, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___to;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0, ___to) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0, ___target) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleSprite
class CORDL_TYPE DOTweenModuleSprite : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::DG::Tweening::DOTweenModuleSprite___c__DisplayClass0_0;

using __c__DisplayClass1_0 = ::DG::Tweening::DOTweenModuleSprite___c__DisplayClass1_0;

using __c__DisplayClass3_0 = ::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0;

/// @brief Method DOBlendableColor, addr 0x16afaf0, size 0x1e4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOBlendableColor(::UnityEngine::SpriteRenderer*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOColor, addr 0x16af604, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(::UnityEngine::SpriteRenderer*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOFade, addr 0x16af7a0, size 0x16c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(::UnityEngine::SpriteRenderer*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOGradientColor, addr 0x16af914, size 0x1dc, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::SpriteRenderer*  target, ::UnityEngine::Gradient*  gradient, float_t  duration) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleSprite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleSprite(DOTweenModuleSprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleSprite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleSprite(DOTweenModuleSprite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleSprite, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenModuleSprite);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleSprite*, "DG.Tweening", "DOTweenModuleSprite");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass0_0*, "DG.Tweening", "DOTweenModuleSprite/<>c__DisplayClass0_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass1_0*, "DG.Tweening", "DOTweenModuleSprite/<>c__DisplayClass1_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleSprite___c__DisplayClass3_0*, "DG.Tweening", "DOTweenModuleSprite/<>c__DisplayClass3_0");
