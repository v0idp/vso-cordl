#pragma once
// IWYU pragma private; include "VROSC/HighlightSpawnable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HighlightSpawnable)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class Grabable;
}
namespace VROSC {
class HighlightSpawnable__CoHighlight_d__14;
}
// Forward declare root types
namespace VROSC {
class HighlightSpawnable;
}
namespace VROSC {
class HighlightSpawnable__CoHighlight_d__14;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HighlightSpawnable);
MARK_REF_PTR_T(::VROSC::HighlightSpawnable__CoHighlight_d__14);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HighlightSpawnable/<CoHighlight>d__14
class CORDL_TYPE HighlightSpawnable__CoHighlight_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::HighlightSpawnable>  __4__this;

/// @brief Field <_animationTimer>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get___animationTimer_5__2, put=__cordl_internal_set___animationTimer_5__2)) float_t  __animationTimer_5__2;

/// @brief Field <startScale>5__3, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale_5__3, put=__cordl_internal_set__startScale_5__3)) ::UnityEngine::Vector3  _startScale_5__3;

/// @brief Field <targetScale>5__4, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetScale_5__4, put=__cordl_internal_set__targetScale_5__4)) ::UnityEngine::Vector3  _targetScale_5__4;

/// @brief Field highlight, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_highlight, put=__cordl_internal_set_highlight)) bool  highlight;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x170cfdc, size 0x1b8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::HighlightSpawnable__CoHighlight_d__14* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x170d194, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x170d19c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x170d1d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x170cfd8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::HighlightSpawnable> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::HighlightSpawnable>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get___animationTimer_5__2() const;

constexpr float_t& __cordl_internal_get___animationTimer_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale_5__3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetScale_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetScale_5__4() ;

constexpr bool const& __cordl_internal_get_highlight() const;

constexpr bool& __cordl_internal_get_highlight() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::HighlightSpawnable>  value) ;

constexpr void __cordl_internal_set___animationTimer_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startScale_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetScale_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_highlight(bool  value) ;

/// @brief Method .ctor, addr 0x170cf90, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HighlightSpawnable__CoHighlight_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HighlightSpawnable__CoHighlight_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HighlightSpawnable__CoHighlight_d__14(HighlightSpawnable__CoHighlight_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HighlightSpawnable__CoHighlight_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HighlightSpawnable__CoHighlight_d__14(HighlightSpawnable__CoHighlight_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{873};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::HighlightSpawnable>  _____4__this;

/// @brief Field highlight, offset: 0x28, size: 0x1, def value: None
 bool  ___highlight;

/// @brief Field <_animationTimer>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  _____animationTimer_5__2;

/// @brief Field <startScale>5__3, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale_5__3;

/// @brief Field <targetScale>5__4, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetScale_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HighlightSpawnable__CoHighlight_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable__CoHighlight_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable__CoHighlight_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable__CoHighlight_d__14, ___highlight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable__CoHighlight_d__14, _____animationTimer_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable__CoHighlight_d__14, ____startScale_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable__CoHighlight_d__14, ____targetScale_5__4) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HighlightSpawnable__CoHighlight_d__14, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HighlightSpawnable
class CORDL_TYPE HighlightSpawnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CoHighlight_d__14 = ::VROSC::HighlightSpawnable__CoHighlight_d__14;

/// @brief Field _grabable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabable, put=__cordl_internal_set__grabable)) ::UnityW<::VROSC::Grabable>  _grabable;

/// @brief Field _highlightAnimationCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightAnimationCurve, put=__cordl_internal_set__highlightAnimationCurve)) ::UnityEngine::AnimationCurve*  _highlightAnimationCurve;

/// @brief Field _highlightAnimationDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightAnimationDuration, put=__cordl_internal_set__highlightAnimationDuration)) float_t  _highlightAnimationDuration;

/// @brief Field _highlightRoutine, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightRoutine, put=__cordl_internal_set__highlightRoutine)) ::UnityEngine::Coroutine*  _highlightRoutine;

/// @brief Field _hint, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hint, put=__cordl_internal_set__hint)) ::UnityW<::UnityEngine::GameObject>  _hint;

/// @brief Field _hoverLengthToAnimate, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverLengthToAnimate, put=__cordl_internal_set__hoverLengthToAnimate)) float_t  _hoverLengthToAnimate;

/// @brief Field _hoverScale, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverScale, put=__cordl_internal_set__hoverScale)) float_t  _hoverScale;

/// @brief Field _hoveringTimer, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoveringTimer, put=__cordl_internal_set__hoveringTimer)) float_t  _hoveringTimer;

/// @brief Field _isHighlighted, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHighlighted, put=__cordl_internal_set__isHighlighted)) bool  _isHighlighted;

/// @brief Field _startScale, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale, put=__cordl_internal_set__startScale)) ::UnityEngine::Vector3  _startScale;

/// @brief Method Awake, addr 0x170cd48, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CoHighlight, addr 0x170cf1c, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoHighlight(bool  highlight) ;

/// @brief Method Highlight, addr 0x170ceb8, size 0x64, virtual false, abstract: false, final false
inline void Highlight(bool  highlight) ;

static inline ::VROSC::HighlightSpawnable* New_ctor() ;

/// @brief Method OnEnable, addr 0x170cd78, size 0x38, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShowHint, addr 0x170cdb0, size 0x94, virtual false, abstract: false, final false
inline void ShowHint(bool  show) ;

/// @brief Method Update, addr 0x170ce44, size 0x74, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::Grabable> const& __cordl_internal_get__grabable() const;

constexpr ::UnityW<::VROSC::Grabable>& __cordl_internal_get__grabable() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__highlightAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__highlightAnimationCurve() ;

constexpr float_t const& __cordl_internal_get__highlightAnimationDuration() const;

constexpr float_t& __cordl_internal_get__highlightAnimationDuration() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__highlightRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__highlightRoutine() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hint() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hint() ;

constexpr float_t const& __cordl_internal_get__hoverLengthToAnimate() const;

constexpr float_t& __cordl_internal_get__hoverLengthToAnimate() ;

constexpr float_t const& __cordl_internal_get__hoverScale() const;

constexpr float_t& __cordl_internal_get__hoverScale() ;

constexpr float_t const& __cordl_internal_get__hoveringTimer() const;

constexpr float_t& __cordl_internal_get__hoveringTimer() ;

constexpr bool const& __cordl_internal_get__isHighlighted() const;

constexpr bool& __cordl_internal_get__isHighlighted() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale() ;

constexpr void __cordl_internal_set__grabable(::UnityW<::VROSC::Grabable>  value) ;

constexpr void __cordl_internal_set__highlightAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__highlightAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set__highlightRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__hint(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__hoverLengthToAnimate(float_t  value) ;

constexpr void __cordl_internal_set__hoverScale(float_t  value) ;

constexpr void __cordl_internal_set__hoveringTimer(float_t  value) ;

constexpr void __cordl_internal_set__isHighlighted(bool  value) ;

constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x170cfb8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HighlightSpawnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HighlightSpawnable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HighlightSpawnable(HighlightSpawnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HighlightSpawnable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HighlightSpawnable(HighlightSpawnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{874};

/// @brief Field _grabable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Grabable>  ____grabable;

/// @brief Field _highlightAnimationCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____highlightAnimationCurve;

/// @brief Field _highlightAnimationDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ____highlightAnimationDuration;

/// @brief Field _hoverLengthToAnimate, offset: 0x34, size: 0x4, def value: None
 float_t  ____hoverLengthToAnimate;

/// @brief Field _hoverScale, offset: 0x38, size: 0x4, def value: None
 float_t  ____hoverScale;

/// @brief Field _hint, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____hint;

/// @brief Field _startScale, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale;

/// @brief Field _hoveringTimer, offset: 0x54, size: 0x4, def value: None
 float_t  ____hoveringTimer;

/// @brief Field _highlightRoutine, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____highlightRoutine;

/// @brief Field _isHighlighted, offset: 0x60, size: 0x1, def value: None
 bool  ____isHighlighted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HighlightSpawnable, ____grabable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____highlightAnimationCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____highlightAnimationDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____hoverLengthToAnimate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____hoverScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____hint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____startScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____hoveringTimer) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____highlightRoutine) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightSpawnable, ____isHighlighted) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HighlightSpawnable, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HighlightSpawnable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HighlightSpawnable*, "VROSC", "HighlightSpawnable");
NEED_NO_BOX(::VROSC::HighlightSpawnable__CoHighlight_d__14);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HighlightSpawnable__CoHighlight_d__14*, "VROSC", "HighlightSpawnable/<CoHighlight>d__14");
