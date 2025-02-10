#pragma once
// IWYU pragma private; include "VROSC/MetronomeDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetronomeDisplay)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class GridLayoutGroup;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class MetronomeDisplay__StrokeFlow_d__17;
}
// Forward declare root types
namespace VROSC {
class MetronomeDisplay;
}
namespace VROSC {
class MetronomeDisplay__StrokeFlow_d__17;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MetronomeDisplay);
MARK_REF_PTR_T(::VROSC::MetronomeDisplay__StrokeFlow_d__17);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MetronomeDisplay/<StrokeFlow>d__17
class CORDL_TYPE MetronomeDisplay__StrokeFlow_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::MetronomeDisplay>  __4__this;

/// @brief Field <time>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field beat, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_beat, put=__cordl_internal_set_beat)) int32_t  beat;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17359b4, size 0x13c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::MetronomeDisplay__StrokeFlow_d__17* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1735af0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1735af8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1735b30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17359b0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::MetronomeDisplay> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::MetronomeDisplay>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr int32_t const& __cordl_internal_get_beat() const;

constexpr int32_t& __cordl_internal_get_beat() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::MetronomeDisplay>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_beat(int32_t  value) ;

/// @brief Method .ctor, addr 0x173584c, size 0x28, virtual false, abstract: false, final false
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
constexpr MetronomeDisplay__StrokeFlow_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetronomeDisplay__StrokeFlow_d__17", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetronomeDisplay__StrokeFlow_d__17(MetronomeDisplay__StrokeFlow_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetronomeDisplay__StrokeFlow_d__17", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetronomeDisplay__StrokeFlow_d__17(MetronomeDisplay__StrokeFlow_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1078};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::MetronomeDisplay>  _____4__this;

/// @brief Field beat, offset: 0x28, size: 0x4, def value: None
 int32_t  ___beat;

/// @brief Field <time>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MetronomeDisplay__StrokeFlow_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay__StrokeFlow_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay__StrokeFlow_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay__StrokeFlow_d__17, ___beat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay__StrokeFlow_d__17, ____time_5__2) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MetronomeDisplay__StrokeFlow_d__17, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MetronomeDisplay
class CORDL_TYPE MetronomeDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StrokeFlow_d__17 = ::VROSC::MetronomeDisplay__StrokeFlow_d__17;

/// @brief Field _beatColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__beatColor, put=__cordl_internal_set__beatColor)) ::UnityEngine::Color  _beatColor;

/// @brief Field _beatColorGetter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatColorGetter, put=__cordl_internal_set__beatColorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _beatColorGetter;

/// @brief Field _beatpassedColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__beatpassedColor, put=__cordl_internal_set__beatpassedColor)) ::UnityEngine::Color  _beatpassedColor;

/// @brief Field _beatpassedMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__beatpassedMultiplier, put=__cordl_internal_set__beatpassedMultiplier)) float_t  _beatpassedMultiplier;

/// @brief Field _beats, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__beats, put=__cordl_internal_set__beats)) ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  _beats;

/// @brief Field _gridLayoutGroup, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__gridLayoutGroup, put=__cordl_internal_set__gridLayoutGroup)) ::UnityW<::UnityEngine::UI::GridLayoutGroup>  _gridLayoutGroup;

/// @brief Field _offColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__offColor, put=__cordl_internal_set__offColor)) ::UnityEngine::Color  _offColor;

/// @brief Field _strikeCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__strikeCurve, put=__cordl_internal_set__strikeCurve)) ::UnityEngine::AnimationCurve*  _strikeCurve;

/// @brief Field _strikeduration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__strikeduration, put=__cordl_internal_set__strikeduration)) float_t  _strikeduration;

/// @brief Method Awake, addr 0x1734f44, size 0x168, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BeatsPerBarChanged, addr 0x17350ac, size 0xb0, virtual false, abstract: false, final false
inline void BeatsPerBarChanged(int32_t  beatsPerBar) ;

/// @brief Method CheckIfLightsShouldBeOn, addr 0x1735254, size 0xec, virtual false, abstract: false, final false
inline void CheckIfLightsShouldBeOn() ;

/// @brief Method ColorChanged, addr 0x1735340, size 0x50, virtual false, abstract: false, final false
inline void ColorChanged() ;

/// @brief Method GetAdjustableMeshByBeat, addr 0x1735964, size 0x34, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AdjustableMesh> GetAdjustableMeshByBeat(int32_t  beat) ;

/// @brief Method MakeStroke, addr 0x1735744, size 0x44, virtual false, abstract: false, final false
inline void MakeStroke(int32_t  beat) ;

static inline ::VROSC::MetronomeDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x173515c, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1735564, size 0x1b8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1735390, size 0x1d4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetActive, addr 0x173571c, size 0x28, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeActive) ;

/// @brief Method SetColor, addr 0x1735874, size 0xf0, virtual false, abstract: false, final false
inline void SetColor(int32_t  beat, ::UnityEngine::Color  color) ;

/// @brief Method StrokeFlow, addr 0x17357dc, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StrokeFlow(int32_t  beat) ;

/// @brief Method TurnAllOff, addr 0x1735788, size 0x54, virtual false, abstract: false, final false
inline void TurnAllOff() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__beatColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__beatColor() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__beatColorGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__beatColorGetter() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__beatpassedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__beatpassedColor() ;

constexpr float_t const& __cordl_internal_get__beatpassedMultiplier() const;

constexpr float_t& __cordl_internal_get__beatpassedMultiplier() ;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*> const& __cordl_internal_get__beats() const;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>& __cordl_internal_get__beats() ;

constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup> const& __cordl_internal_get__gridLayoutGroup() const;

constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup>& __cordl_internal_get__gridLayoutGroup() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__offColor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__strikeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__strikeCurve() ;

constexpr float_t const& __cordl_internal_get__strikeduration() const;

constexpr float_t& __cordl_internal_get__strikeduration() ;

constexpr void __cordl_internal_set__beatColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__beatColorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__beatpassedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__beatpassedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__beats(::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  value) ;

constexpr void __cordl_internal_set__gridLayoutGroup(::UnityW<::UnityEngine::UI::GridLayoutGroup>  value) ;

constexpr void __cordl_internal_set__offColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__strikeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__strikeduration(float_t  value) ;

/// @brief Method .ctor, addr 0x1735998, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetronomeDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetronomeDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetronomeDisplay(MetronomeDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetronomeDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetronomeDisplay(MetronomeDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1079};

/// @brief Field _beatColorGetter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____beatColorGetter;

/// @brief Field _beatpassedMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ____beatpassedMultiplier;

/// @brief Field _strikeCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____strikeCurve;

/// @brief Field _strikeduration, offset: 0x38, size: 0x4, def value: None
 float_t  ____strikeduration;

/// @brief Field _beats, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  ____beats;

/// @brief Field _gridLayoutGroup, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::GridLayoutGroup>  ____gridLayoutGroup;

/// @brief Field _offColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____offColor;

/// @brief Field _beatpassedColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____beatpassedColor;

/// @brief Field _beatColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____beatColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MetronomeDisplay, ____beatColorGetter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____beatpassedMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____strikeCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____strikeduration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____beats) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____gridLayoutGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____offColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____beatpassedColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::MetronomeDisplay, ____beatColor) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MetronomeDisplay, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MetronomeDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MetronomeDisplay*, "VROSC", "MetronomeDisplay");
NEED_NO_BOX(::VROSC::MetronomeDisplay__StrokeFlow_d__17);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MetronomeDisplay__StrokeFlow_d__17*, "VROSC", "MetronomeDisplay/<StrokeFlow>d__17");
