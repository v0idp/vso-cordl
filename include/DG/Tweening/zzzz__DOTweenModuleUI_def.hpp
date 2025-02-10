#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModuleUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenModuleUI)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct ColorOptions;
}
namespace DG::Tweening::Plugins::Options {
struct FloatOptions;
}
namespace DG::Tweening::Plugins::Options {
struct StringOptions;
}
namespace DG::Tweening::Plugins::Options {
struct VectorOptions;
}
namespace DG::Tweening {
class DOTweenModuleUI_Utils;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass10_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass11_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass12_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass13_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass14_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass15_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass16_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass17_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass18_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass19_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass20_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass21_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass22_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass23_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass24_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass25_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass26_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass27_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass28_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass29_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass2_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass30_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass31_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass32_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass33_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass34_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass35_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass36_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass37_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass38_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass39_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass3_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass4_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass5_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass7_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass8_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass9_0;
}
namespace DG::Tweening {
struct ScrambleMode;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
class Tweener;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class LayoutElement;
}
namespace UnityEngine::UI {
class Outline;
}
namespace UnityEngine::UI {
class ScrollRect;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenModuleUI;
}
namespace DG::Tweening {
class DOTweenModuleUI_Utils;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass10_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass11_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass12_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass13_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass14_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass15_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass16_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass17_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass18_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass19_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass20_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass21_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass22_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass23_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass24_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass25_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass26_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass27_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass28_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass29_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass2_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass30_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass31_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass32_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass33_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass34_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass35_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass36_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass37_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass38_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass39_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass3_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass4_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass5_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass7_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass8_0;
}
namespace DG::Tweening {
class DOTweenModuleUI___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI_Utils);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass0_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass10_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass11_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass12_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass13_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass14_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass15_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass16_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass17_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass18_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass19_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass1_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass20_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass21_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass22_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass23_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass24_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass25_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass26_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass27_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass28_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass2_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass30_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass31_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass32_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass33_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass34_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass35_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass36_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass3_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass4_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass5_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass7_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass8_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUI___c__DisplayClass9_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/Utils
class CORDL_TYPE DOTweenModuleUI_Utils : public ::System::Object {
public:
// Declarations
/// @brief Method SwitchToRectTransform, addr 0x16b4148, size 0x188, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 SwitchToRectTransform(::UnityEngine::RectTransform*  from, ::UnityEngine::RectTransform*  to) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI_Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI_Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI_Utils(DOTweenModuleUI_Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI_Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI_Utils(DOTweenModuleUI_Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11756};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI_Utils, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::CanvasGroup>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <DOFade>b__0, addr 0x16b42d0, size 0x1c, virtual false, abstract: false, final false
inline float_t _DOFade_b__0() ;

/// @brief Method <DOFade>b__1, addr 0x16b42ec, size 0x1c, virtual false, abstract: false, final false
inline void _DOFade_b__1(float_t  x) ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::CanvasGroup>  value) ;

/// @brief Method .ctor, addr 0x16aff30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass0_0(DOTweenModuleUI___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass0_0(DOTweenModuleUI___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11757};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass0_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Outline>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <DOColor>b__0, addr 0x16b4308, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOColor_b__0() ;

/// @brief Method <DOColor>b__1, addr 0x16b4328, size 0x1c, virtual false, abstract: false, final false
inline void _DOColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Outline> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Outline>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Outline>  value) ;

/// @brief Method .ctor, addr 0x16b0f3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass10_0(DOTweenModuleUI___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass10_0(DOTweenModuleUI___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11758};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Outline>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass10_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Outline>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <DOFade>b__0, addr 0x16b4344, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOFade_b__0() ;

/// @brief Method <DOFade>b__1, addr 0x16b4364, size 0x1c, virtual false, abstract: false, final false
inline void _DOFade_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Outline> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Outline>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Outline>  value) ;

/// @brief Method .ctor, addr 0x16b10b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass11_0(DOTweenModuleUI___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass11_0(DOTweenModuleUI___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11759};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Outline>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass11_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Outline>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <DOScale>b__0, addr 0x16b4380, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOScale_b__0() ;

/// @brief Method <DOScale>b__1, addr 0x16b439c, size 0x1c, virtual false, abstract: false, final false
inline void _DOScale_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::UI::Outline> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Outline>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Outline>  value) ;

/// @brief Method .ctor, addr 0x16b1234, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass12_0(DOTweenModuleUI___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass12_0(DOTweenModuleUI___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11760};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Outline>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass12_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <DOAnchorPos>b__0, addr 0x16b43b8, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOAnchorPos_b__0() ;

/// @brief Method <DOAnchorPos>b__1, addr 0x16b43d4, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorPos_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b13d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass13_0(DOTweenModuleUI___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass13_0(DOTweenModuleUI___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11761};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass13_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass14_0* New_ctor() ;

/// @brief Method <DOAnchorPosX>b__0, addr 0x16b43f0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOAnchorPosX_b__0() ;

/// @brief Method <DOAnchorPosX>b__1, addr 0x16b440c, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorPosX_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b1564, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass14_0(DOTweenModuleUI___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass14_0(DOTweenModuleUI___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11762};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass14_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass14_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <DOAnchorPosY>b__0, addr 0x16b4428, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOAnchorPosY_b__0() ;

/// @brief Method <DOAnchorPosY>b__1, addr 0x16b4444, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorPosY_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b16f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass15_0(DOTweenModuleUI___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass15_0(DOTweenModuleUI___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11763};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass15_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass15_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass16_0* New_ctor() ;

/// @brief Method <DOAnchorPos3D>b__0, addr 0x16b4460, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOAnchorPos3D_b__0() ;

/// @brief Method <DOAnchorPos3D>b__1, addr 0x16b447c, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorPos3D_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b189c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass16_0(DOTweenModuleUI___c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass16_0(DOTweenModuleUI___c__DisplayClass16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11764};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass16_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass16_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass17_0* New_ctor() ;

/// @brief Method <DOAnchorPos3DX>b__0, addr 0x16b4498, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOAnchorPos3DX_b__0() ;

/// @brief Method <DOAnchorPos3DX>b__1, addr 0x16b44b4, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorPos3DX_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b1a34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass17_0(DOTweenModuleUI___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass17_0(DOTweenModuleUI___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11765};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass17_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <DOAnchorPos3DY>b__0, addr 0x16b44d0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOAnchorPos3DY_b__0() ;

/// @brief Method <DOAnchorPos3DY>b__1, addr 0x16b44ec, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorPos3DY_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b1bcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass18_0(DOTweenModuleUI___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass18_0(DOTweenModuleUI___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11766};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass18_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass18_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <DOAnchorPos3DZ>b__0, addr 0x16b4508, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOAnchorPos3DZ_b__0() ;

/// @brief Method <DOAnchorPos3DZ>b__1, addr 0x16b4524, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorPos3DZ_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b1d64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass19_0(DOTweenModuleUI___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass19_0(DOTweenModuleUI___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11767};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass19_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass19_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Graphic>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <DOColor>b__0, addr 0x16b4540, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOColor_b__0() ;

/// @brief Method <DOColor>b__1, addr 0x16b4564, size 0x24, virtual false, abstract: false, final false
inline void _DOColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Graphic>  value) ;

/// @brief Method .ctor, addr 0x16b00cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass1_0(DOTweenModuleUI___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass1_0(DOTweenModuleUI___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11768};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass1_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <DOAnchorMax>b__0, addr 0x16b4588, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOAnchorMax_b__0() ;

/// @brief Method <DOAnchorMax>b__1, addr 0x16b45a4, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorMax_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b1f00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass20_0(DOTweenModuleUI___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass20_0(DOTweenModuleUI___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11769};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass20_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass20_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <DOAnchorMin>b__0, addr 0x16b45c0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOAnchorMin_b__0() ;

/// @brief Method <DOAnchorMin>b__1, addr 0x16b45dc, size 0x1c, virtual false, abstract: false, final false
inline void _DOAnchorMin_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b209c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass21_0(DOTweenModuleUI___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass21_0(DOTweenModuleUI___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11770};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass21_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass21_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <DOPivot>b__0, addr 0x16b45f8, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOPivot_b__0() ;

/// @brief Method <DOPivot>b__1, addr 0x16b4614, size 0x1c, virtual false, abstract: false, final false
inline void _DOPivot_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b2220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass22_0(DOTweenModuleUI___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass22_0(DOTweenModuleUI___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11771};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass22_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass22_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <DOPivotX>b__0, addr 0x16b4630, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOPivotX_b__0() ;

/// @brief Method <DOPivotX>b__1, addr 0x16b464c, size 0x1c, virtual false, abstract: false, final false
inline void _DOPivotX_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b23a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass23_0(DOTweenModuleUI___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass23_0(DOTweenModuleUI___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11772};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass23_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass23_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <DOPivotY>b__0, addr 0x16b4668, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOPivotY_b__0() ;

/// @brief Method <DOPivotY>b__1, addr 0x16b4684, size 0x1c, virtual false, abstract: false, final false
inline void _DOPivotY_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b2530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass24_0(DOTweenModuleUI___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass24_0(DOTweenModuleUI___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11773};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass24_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass24_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <DOSizeDelta>b__0, addr 0x16b46a0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOSizeDelta_b__0() ;

/// @brief Method <DOSizeDelta>b__1, addr 0x16b46bc, size 0x1c, virtual false, abstract: false, final false
inline void _DOSizeDelta_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b26cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass25_0(DOTweenModuleUI___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass25_0(DOTweenModuleUI___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11774};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass25_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass25_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <DOPunchAnchorPos>b__0, addr 0x16b46d8, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOPunchAnchorPos_b__0() ;

/// @brief Method <DOPunchAnchorPos>b__1, addr 0x16b46fc, size 0x1c, virtual false, abstract: false, final false
inline void _DOPunchAnchorPos_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b2870, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass26_0(DOTweenModuleUI___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass26_0(DOTweenModuleUI___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11775};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass26_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass26_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <DOShakeAnchorPos>b__0, addr 0x16b4718, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOShakeAnchorPos_b__0() ;

/// @brief Method <DOShakeAnchorPos>b__1, addr 0x16b473c, size 0x1c, virtual false, abstract: false, final false
inline void _DOShakeAnchorPos_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b2a3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass27_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass27_0(DOTweenModuleUI___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass27_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass27_0(DOTweenModuleUI___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11776};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass27_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass27_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass28_0* New_ctor() ;

/// @brief Method <DOShakeAnchorPos>b__0, addr 0x16b4758, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOShakeAnchorPos_b__0() ;

/// @brief Method <DOShakeAnchorPos>b__1, addr 0x16b477c, size 0x1c, virtual false, abstract: false, final false
inline void _DOShakeAnchorPos_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b2c10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass28_0(DOTweenModuleUI___c__DisplayClass28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass28_0(DOTweenModuleUI___c__DisplayClass28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11777};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass28_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass28_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object, UnityEngine.Vector2
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field endValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_endValue, put=__cordl_internal_set_endValue)) ::UnityEngine::Vector2  endValue;

/// @brief Field offsetY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetY, put=__cordl_internal_set_offsetY)) float_t  offsetY;

/// @brief Field offsetYSet, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_offsetYSet, put=__cordl_internal_set_offsetYSet)) bool  offsetYSet;

/// @brief Field s, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_s, put=__cordl_internal_set_s)) ::DG::Tweening::Sequence*  s;

/// @brief Field startPosY, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPosY, put=__cordl_internal_set_startPosY)) float_t  startPosY;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <DOJumpAnchorPos>b__0, addr 0x16b4798, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOJumpAnchorPos_b__0() ;

/// @brief Method <DOJumpAnchorPos>b__1, addr 0x16b47b4, size 0x1c, virtual false, abstract: false, final false
inline void _DOJumpAnchorPos_b__1(::UnityEngine::Vector2  x) ;

/// @brief Method <DOJumpAnchorPos>b__2, addr 0x16b47d0, size 0x28, virtual false, abstract: false, final false
inline void _DOJumpAnchorPos_b__2() ;

/// @brief Method <DOJumpAnchorPos>b__3, addr 0x16b47f8, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOJumpAnchorPos_b__3() ;

/// @brief Method <DOJumpAnchorPos>b__4, addr 0x16b4814, size 0x1c, virtual false, abstract: false, final false
inline void _DOJumpAnchorPos_b__4(::UnityEngine::Vector2  x) ;

/// @brief Method <DOJumpAnchorPos>b__5, addr 0x16b4830, size 0xa8, virtual false, abstract: false, final false
inline void _DOJumpAnchorPos_b__5() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_endValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_endValue() ;

constexpr float_t const& __cordl_internal_get_offsetY() const;

constexpr float_t& __cordl_internal_get_offsetY() ;

constexpr bool const& __cordl_internal_get_offsetYSet() const;

constexpr bool& __cordl_internal_get_offsetYSet() ;

constexpr ::DG::Tweening::Sequence* const& __cordl_internal_get_s() const;

constexpr ::DG::Tweening::Sequence*& __cordl_internal_get_s() ;

constexpr float_t const& __cordl_internal_get_startPosY() const;

constexpr float_t& __cordl_internal_get_startPosY() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_endValue(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_offsetY(float_t  value) ;

constexpr void __cordl_internal_set_offsetYSet(bool  value) ;

constexpr void __cordl_internal_set_s(::DG::Tweening::Sequence*  value) ;

constexpr void __cordl_internal_set_startPosY(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x16b300c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass29_0(DOTweenModuleUI___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass29_0(DOTweenModuleUI___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11778};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

/// @brief Field startPosY, offset: 0x18, size: 0x4, def value: None
 float_t  ___startPosY;

/// @brief Field offsetYSet, offset: 0x1c, size: 0x1, def value: None
 bool  ___offsetYSet;

/// @brief Field offsetY, offset: 0x20, size: 0x4, def value: None
 float_t  ___offsetY;

/// @brief Field s, offset: 0x28, size: 0x8, def value: None
 ::DG::Tweening::Sequence*  ___s;

/// @brief Field endValue, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___endValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0, ___startPosY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0, ___offsetYSet) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0, ___offsetY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0, ___s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0, ___endValue) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0, 0x38>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Graphic>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <DOFade>b__0, addr 0x16b48d8, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOFade_b__0() ;

/// @brief Method <DOFade>b__1, addr 0x16b48fc, size 0x24, virtual false, abstract: false, final false
inline void _DOFade_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Graphic>  value) ;

/// @brief Method .ctor, addr 0x16b0240, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass2_0(DOTweenModuleUI___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass2_0(DOTweenModuleUI___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11779};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass2_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::ScrollRect>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <DONormalizedPos>b__0, addr 0x16b4920, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DONormalizedPos_b__0() ;

/// @brief Method <DONormalizedPos>b__1, addr 0x16b4968, size 0x40, virtual false, abstract: false, final false
inline void _DONormalizedPos_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::ScrollRect>  value) ;

/// @brief Method .ctor, addr 0x16b319c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass30_0(DOTweenModuleUI___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass30_0(DOTweenModuleUI___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11780};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ScrollRect>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass30_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass30_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::ScrollRect>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <DOHorizontalNormalizedPos>b__0, addr 0x16b49a8, size 0x1c, virtual false, abstract: false, final false
inline float_t _DOHorizontalNormalizedPos_b__0() ;

/// @brief Method <DOHorizontalNormalizedPos>b__1, addr 0x16b49c4, size 0x1c, virtual false, abstract: false, final false
inline void _DOHorizontalNormalizedPos_b__1(float_t  x) ;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::ScrollRect>  value) ;

/// @brief Method .ctor, addr 0x16b331c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass31_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass31_0(DOTweenModuleUI___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass31_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass31_0(DOTweenModuleUI___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11781};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ScrollRect>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass31_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass31_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::ScrollRect>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <DOVerticalNormalizedPos>b__0, addr 0x16b49e0, size 0x1c, virtual false, abstract: false, final false
inline float_t _DOVerticalNormalizedPos_b__0() ;

/// @brief Method <DOVerticalNormalizedPos>b__1, addr 0x16b49fc, size 0x1c, virtual false, abstract: false, final false
inline void _DOVerticalNormalizedPos_b__1(float_t  x) ;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::ScrollRect>  value) ;

/// @brief Method .ctor, addr 0x16b349c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass32_0(DOTweenModuleUI___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass32_0(DOTweenModuleUI___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11782};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ScrollRect>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass32_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass32_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Slider>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <DOValue>b__0, addr 0x16b4a18, size 0x24, virtual false, abstract: false, final false
inline float_t _DOValue_b__0() ;

/// @brief Method <DOValue>b__1, addr 0x16b4a3c, size 0x24, virtual false, abstract: false, final false
inline void _DOValue_b__1(float_t  x) ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Slider>  value) ;

/// @brief Method .ctor, addr 0x16b3628, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass33_0(DOTweenModuleUI___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass33_0(DOTweenModuleUI___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11783};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass33_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass33_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Text>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass34_0* New_ctor() ;

/// @brief Method <DOColor>b__0, addr 0x16b4a60, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOColor_b__0() ;

/// @brief Method <DOColor>b__1, addr 0x16b4a84, size 0x24, virtual false, abstract: false, final false
inline void _DOColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x16b37c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass34_0(DOTweenModuleUI___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass34_0(DOTweenModuleUI___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11784};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass34_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass34_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass35_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Text>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass35_0* New_ctor() ;

/// @brief Method <DOFade>b__0, addr 0x16b4aa8, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOFade_b__0() ;

/// @brief Method <DOFade>b__1, addr 0x16b4acc, size 0x24, virtual false, abstract: false, final false
inline void _DOFade_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x16b3938, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass35_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass35_0(DOTweenModuleUI___c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass35_0(DOTweenModuleUI___c__DisplayClass35_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11785};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass35_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass35_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass36_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Text>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass36_0* New_ctor() ;

/// @brief Method <DOText>b__0, addr 0x16b4af0, size 0x24, virtual false, abstract: false, final false
inline ::StringW _DOText_b__0() ;

/// @brief Method <DOText>b__1, addr 0x16b4b14, size 0x24, virtual false, abstract: false, final false
inline void _DOText_b__1(::StringW  x) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x16b3b58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass36_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass36_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass36_0(DOTweenModuleUI___c__DisplayClass36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass36_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass36_0(DOTweenModuleUI___c__DisplayClass36_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11786};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass36_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass36_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object, UnityEngine.Color
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Graphic>  target;

/// @brief Field to, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityEngine::Color  to;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <DOBlendableColor>b__0, addr 0x16b4b38, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOBlendableColor_b__0() ;

/// @brief Method <DOBlendableColor>b__1, addr 0x16b4b44, size 0x7c, virtual false, abstract: false, final false
inline void _DOBlendableColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_to() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Graphic>  value) ;

constexpr void __cordl_internal_set_to(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x16b3d50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass37_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass37_0(DOTweenModuleUI___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass37_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass37_0(DOTweenModuleUI___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11787};

/// @brief Field to, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___to;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0, ___to) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0, ___target) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object, UnityEngine.Color
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Image>  target;

/// @brief Field to, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityEngine::Color  to;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0* New_ctor() ;

/// @brief Method <DOBlendableColor>b__0, addr 0x16b4bc0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOBlendableColor_b__0() ;

/// @brief Method <DOBlendableColor>b__1, addr 0x16b4bcc, size 0x7c, virtual false, abstract: false, final false
inline void _DOBlendableColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_to() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_to(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x16b3f48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass38_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass38_0(DOTweenModuleUI___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass38_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass38_0(DOTweenModuleUI___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11788};

/// @brief Field to, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___to;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0, ___to) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0, ___target) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object, UnityEngine.Color
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Text>  target;

/// @brief Field to, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityEngine::Color  to;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0* New_ctor() ;

/// @brief Method <DOBlendableColor>b__0, addr 0x16b4c48, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOBlendableColor_b__0() ;

/// @brief Method <DOBlendableColor>b__1, addr 0x16b4c54, size 0x7c, virtual false, abstract: false, final false
inline void _DOBlendableColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_to() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_to(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x16b4140, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass39_0(DOTweenModuleUI___c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass39_0(DOTweenModuleUI___c__DisplayClass39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11789};

/// @brief Field to, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___to;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0, ___to) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0, ___target) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Image>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <DOColor>b__0, addr 0x16b4cd0, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOColor_b__0() ;

/// @brief Method <DOColor>b__1, addr 0x16b4cf4, size 0x24, virtual false, abstract: false, final false
inline void _DOColor_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x16b03dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass3_0(DOTweenModuleUI___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass3_0(DOTweenModuleUI___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11790};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass3_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Image>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <DOFade>b__0, addr 0x16b4d18, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color _DOFade_b__0() ;

/// @brief Method <DOFade>b__1, addr 0x16b4d3c, size 0x24, virtual false, abstract: false, final false
inline void _DOFade_b__1(::UnityEngine::Color  x) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x16b0550, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass4_0(DOTweenModuleUI___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass4_0(DOTweenModuleUI___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11791};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass4_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::Image>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <DOFillAmount>b__0, addr 0x16b4d60, size 0x1c, virtual false, abstract: false, final false
inline float_t _DOFillAmount_b__0() ;

/// @brief Method <DOFillAmount>b__1, addr 0x16b4d7c, size 0x1c, virtual false, abstract: false, final false
inline void _DOFillAmount_b__1(float_t  x) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x16b06e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass5_0(DOTweenModuleUI___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass5_0(DOTweenModuleUI___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11792};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass5_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::LayoutElement>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <DOFlexibleSize>b__0, addr 0x16b4d98, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOFlexibleSize_b__0() ;

/// @brief Method <DOFlexibleSize>b__1, addr 0x16b4df0, size 0x50, virtual false, abstract: false, final false
inline void _DOFlexibleSize_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::LayoutElement>  value) ;

/// @brief Method .ctor, addr 0x16b0a68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass7_0(DOTweenModuleUI___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass7_0(DOTweenModuleUI___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11793};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::LayoutElement>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass7_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::LayoutElement>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <DOMinSize>b__0, addr 0x16b4e40, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOMinSize_b__0() ;

/// @brief Method <DOMinSize>b__1, addr 0x16b4e98, size 0x50, virtual false, abstract: false, final false
inline void _DOMinSize_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::LayoutElement>  value) ;

/// @brief Method .ctor, addr 0x16b0c04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass8_0(DOTweenModuleUI___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass8_0(DOTweenModuleUI___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11794};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::LayoutElement>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass8_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0
class CORDL_TYPE DOTweenModuleUI___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::UI::LayoutElement>  target;

static inline ::DG::Tweening::DOTweenModuleUI___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <DOPreferredSize>b__0, addr 0x16b4ee8, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOPreferredSize_b__0() ;

/// @brief Method <DOPreferredSize>b__1, addr 0x16b4f40, size 0x50, virtual false, abstract: false, final false
inline void _DOPreferredSize_b__1(::UnityEngine::Vector2  x) ;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::UI::LayoutElement>  value) ;

/// @brief Method .ctor, addr 0x16b0da0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI___c__DisplayClass9_0(DOTweenModuleUI___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI___c__DisplayClass9_0(DOTweenModuleUI___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11795};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::LayoutElement>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUI___c__DisplayClass9_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUI
class CORDL_TYPE DOTweenModuleUI : public ::System::Object {
public:
// Declarations
using Utils = ::DG::Tweening::DOTweenModuleUI_Utils;

using __c__DisplayClass0_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass0_0;

using __c__DisplayClass10_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass10_0;

using __c__DisplayClass11_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass11_0;

using __c__DisplayClass12_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass12_0;

using __c__DisplayClass13_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass13_0;

using __c__DisplayClass14_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass14_0;

using __c__DisplayClass15_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass15_0;

using __c__DisplayClass16_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass16_0;

using __c__DisplayClass17_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass17_0;

using __c__DisplayClass18_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass18_0;

using __c__DisplayClass19_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass19_0;

using __c__DisplayClass1_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass1_0;

using __c__DisplayClass20_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass20_0;

using __c__DisplayClass21_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass21_0;

using __c__DisplayClass22_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass22_0;

using __c__DisplayClass23_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass23_0;

using __c__DisplayClass24_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass24_0;

using __c__DisplayClass25_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass25_0;

using __c__DisplayClass26_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass26_0;

using __c__DisplayClass27_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass27_0;

using __c__DisplayClass28_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass28_0;

using __c__DisplayClass29_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0;

using __c__DisplayClass2_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass2_0;

using __c__DisplayClass30_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass30_0;

using __c__DisplayClass31_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass31_0;

using __c__DisplayClass32_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass32_0;

using __c__DisplayClass33_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass33_0;

using __c__DisplayClass34_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass34_0;

using __c__DisplayClass35_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass35_0;

using __c__DisplayClass36_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass36_0;

using __c__DisplayClass37_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0;

using __c__DisplayClass38_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0;

using __c__DisplayClass39_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0;

using __c__DisplayClass3_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass3_0;

using __c__DisplayClass4_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass4_0;

using __c__DisplayClass5_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass5_0;

using __c__DisplayClass7_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass7_0;

using __c__DisplayClass8_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass8_0;

using __c__DisplayClass9_0 = ::DG::Tweening::DOTweenModuleUI___c__DisplayClass9_0;

/// @brief Method DOAnchorMax, addr 0x16b1d6c, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorMax(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorMin, addr 0x16b1f08, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorMin(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorPos, addr 0x16b123c, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorPos3D, addr 0x16b1700, size 0x19c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3D(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector3  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorPos3DX, addr 0x16b18a4, size 0x190, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3DX(::UnityEngine::RectTransform*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorPos3DY, addr 0x16b1a3c, size 0x190, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3DY(::UnityEngine::RectTransform*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorPos3DZ, addr 0x16b1bd4, size 0x190, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3DZ(::UnityEngine::RectTransform*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorPosX, addr 0x16b13d8, size 0x18c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPosX(::UnityEngine::RectTransform*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOAnchorPosY, addr 0x16b156c, size 0x18c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPosY(::UnityEngine::RectTransform*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOBlendableColor, addr 0x16b3b60, size 0x1f0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOBlendableColor(::UnityEngine::UI::Graphic*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOBlendableColor, addr 0x16b3d58, size 0x1f0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOBlendableColor(::UnityEngine::UI::Image*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOBlendableColor, addr 0x16b3f50, size 0x1f0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOBlendableColor(::UnityEngine::UI::Text*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOColor, addr 0x16aff38, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(::UnityEngine::UI::Graphic*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOColor, addr 0x16b0248, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(::UnityEngine::UI::Image*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOColor, addr 0x16b0da8, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(::UnityEngine::UI::Outline*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOColor, addr 0x16b3630, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(::UnityEngine::UI::Text*  target, ::UnityEngine::Color  endValue, float_t  duration) ;

/// @brief Method DOFade, addr 0x16b00d4, size 0x16c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(::UnityEngine::UI::Graphic*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOFade, addr 0x16b03e4, size 0x16c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(::UnityEngine::UI::Image*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOFade, addr 0x16b0f44, size 0x16c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(::UnityEngine::UI::Outline*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOFade, addr 0x16b37cc, size 0x16c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(::UnityEngine::UI::Text*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOFade, addr 0x16afdc4, size 0x16c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* DOFade(::UnityEngine::CanvasGroup*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOFillAmount, addr 0x16b0558, size 0x190, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* DOFillAmount(::UnityEngine::UI::Image*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOFlexibleSize, addr 0x16b08d4, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOFlexibleSize(::UnityEngine::UI::LayoutElement*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOGradientColor, addr 0x16b06f0, size 0x1e4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::UI::Image*  target, ::UnityEngine::Gradient*  gradient, float_t  duration) ;

/// @brief Method DOHorizontalNormalizedPos, addr 0x16b31a4, size 0x178, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOHorizontalNormalizedPos(::UnityEngine::UI::ScrollRect*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOJumpAnchorPos, addr 0x16b2c18, size 0x3f4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DOJumpAnchorPos(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  endValue, float_t  jumpPower, int32_t  numJumps, float_t  duration, bool  snapping) ;

/// @brief Method DOMinSize, addr 0x16b0a70, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOMinSize(::UnityEngine::UI::LayoutElement*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DONormalizedPos, addr 0x16b3014, size 0x188, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DONormalizedPos(::UnityEngine::UI::ScrollRect*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOPivot, addr 0x16b20a4, size 0x17c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOPivot(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  endValue, float_t  duration) ;

/// @brief Method DOPivotX, addr 0x16b2228, size 0x180, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOPivotX(::UnityEngine::RectTransform*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOPivotY, addr 0x16b23b0, size 0x180, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOPivotY(::UnityEngine::RectTransform*  target, float_t  endValue, float_t  duration) ;

/// @brief Method DOPreferredSize, addr 0x16b0c0c, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOPreferredSize(::UnityEngine::UI::LayoutElement*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOPunchAnchorPos, addr 0x16b26d4, size 0x19c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOPunchAnchorPos(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  punch, float_t  duration, int32_t  vibrato, float_t  elasticity, bool  snapping) ;

/// @brief Method DOScale, addr 0x16b10b8, size 0x17c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOScale(::UnityEngine::UI::Outline*  target, ::UnityEngine::Vector2  endValue, float_t  duration) ;

/// @brief Method DOShakeAnchorPos, addr 0x16b2a44, size 0x1cc, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOShakeAnchorPos(::UnityEngine::RectTransform*  target, float_t  duration, ::UnityEngine::Vector2  strength, int32_t  vibrato, float_t  randomness, bool  snapping, bool  fadeOut) ;

/// @brief Method DOShakeAnchorPos, addr 0x16b2878, size 0x1c4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOShakeAnchorPos(::UnityEngine::RectTransform*  target, float_t  duration, float_t  strength, int32_t  vibrato, float_t  randomness, bool  snapping, bool  fadeOut) ;

/// @brief Method DOSizeDelta, addr 0x16b2538, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOSizeDelta(::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOText, addr 0x16b3940, size 0x218, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>* DOText(::UnityEngine::UI::Text*  target, ::StringW  endValue, float_t  duration, bool  richTextEnabled, ::DG::Tweening::ScrambleMode  scrambleMode, ::StringW  scrambleChars) ;

/// @brief Method DOValue, addr 0x16b34a4, size 0x184, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* DOValue(::UnityEngine::UI::Slider*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOVerticalNormalizedPos, addr 0x16b3324, size 0x178, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* DOVerticalNormalizedPos(::UnityEngine::UI::ScrollRect*  target, float_t  endValue, float_t  duration, bool  snapping) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUI(DOTweenModuleUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUI(DOTweenModuleUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUI, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI*, "DG.Tweening", "DOTweenModuleUI");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI_Utils);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI_Utils*, "DG.Tweening", "DOTweenModuleUI/Utils");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass0_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass0_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass10_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass10_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass11_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass11_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass12_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass12_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass13_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass13_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass14_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass14_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass15_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass15_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass16_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass16_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass17_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass17_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass18_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass18_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass19_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass19_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass1_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass1_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass20_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass20_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass21_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass21_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass22_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass22_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass23_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass23_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass24_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass24_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass25_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass25_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass26_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass26_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass27_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass27_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass28_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass28_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass29_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass29_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass2_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass2_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass30_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass30_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass31_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass31_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass32_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass32_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass33_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass33_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass34_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass34_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass35_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass35_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass36_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass36_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass37_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass37_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass38_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass39_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass39_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass3_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass3_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass4_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass4_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass5_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass5_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass7_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass7_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass8_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass8_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUI___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUI___c__DisplayClass9_0*, "DG.Tweening", "DOTweenModuleUI/<>c__DisplayClass9_0");
