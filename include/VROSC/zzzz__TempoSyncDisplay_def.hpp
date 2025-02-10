#pragma once
// IWYU pragma private; include "VROSC/TempoSyncDisplay.hpp"
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
CORDL_MODULE_EXPORT(TempoSyncDisplay)
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
struct Color;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class TempoSyncDisplay__StrokeFlow_d__18;
}
// Forward declare root types
namespace VROSC {
class TempoSyncDisplay;
}
namespace VROSC {
class TempoSyncDisplay__StrokeFlow_d__18;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TempoSyncDisplay);
MARK_REF_PTR_T(::VROSC::TempoSyncDisplay__StrokeFlow_d__18);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TempoSyncDisplay/<StrokeFlow>d__18
class CORDL_TYPE TempoSyncDisplay__StrokeFlow_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::TempoSyncDisplay>  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17849d0, size 0x134, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::TempoSyncDisplay__StrokeFlow_d__18* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1784b04, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1784b0c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1784b44, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17849cc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::TempoSyncDisplay> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::TempoSyncDisplay>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::TempoSyncDisplay>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x178498c, size 0x28, virtual false, abstract: false, final false
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
constexpr TempoSyncDisplay__StrokeFlow_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempoSyncDisplay__StrokeFlow_d__18", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TempoSyncDisplay__StrokeFlow_d__18(TempoSyncDisplay__StrokeFlow_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempoSyncDisplay__StrokeFlow_d__18", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempoSyncDisplay__StrokeFlow_d__18(TempoSyncDisplay__StrokeFlow_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1313};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TempoSyncDisplay>  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TempoSyncDisplay__StrokeFlow_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay__StrokeFlow_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay__StrokeFlow_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay__StrokeFlow_d__18, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TempoSyncDisplay__StrokeFlow_d__18, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TempoSyncDisplay
class CORDL_TYPE TempoSyncDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StrokeFlow_d__18 = ::VROSC::TempoSyncDisplay__StrokeFlow_d__18;

/// @brief Field _beatColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__beatColor, put=__cordl_internal_set__beatColor)) ::UnityEngine::Color  _beatColor;

/// @brief Field _beatColorGetter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatColorGetter, put=__cordl_internal_set__beatColorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _beatColorGetter;

/// @brief Field _beatDivision, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__beatDivision, put=__cordl_internal_set__beatDivision)) int32_t  _beatDivision;

/// @brief Field _beatVisual, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatVisual, put=__cordl_internal_set__beatVisual)) ::UnityW<::VROSC::AdjustableMesh>  _beatVisual;

/// @brief Field _isOn, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOn, put=__cordl_internal_set__isOn)) bool  _isOn;

/// @brief Field _lastSubdivision, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSubdivision, put=__cordl_internal_set__lastSubdivision)) int32_t  _lastSubdivision;

/// @brief Field _offColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__offColor, put=__cordl_internal_set__offColor)) ::UnityEngine::Color  _offColor;

/// @brief Field _strikeCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__strikeCurve, put=__cordl_internal_set__strikeCurve)) ::UnityEngine::AnimationCurve*  _strikeCurve;

/// @brief Field _strikeduration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__strikeduration, put=__cordl_internal_set__strikeduration)) float_t  _strikeduration;

/// @brief Method Awake, addr 0x17846b0, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ColorChanged, addr 0x17844f4, size 0x30, virtual false, abstract: false, final false
inline void ColorChanged() ;

/// @brief Method MakeStroke, addr 0x1784854, size 0xa4, virtual false, abstract: false, final false
inline void MakeStroke() ;

static inline ::VROSC::TempoSyncDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17848f8, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17845ec, size 0xc4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1784524, size 0xc8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetActive, addr 0x1784904, size 0x28, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeActive) ;

/// @brief Method SetBeatDivision, addr 0x17839a8, size 0x80, virtual false, abstract: false, final false
inline void SetBeatDivision(int32_t  beatDivision) ;

/// @brief Method SetColor, addr 0x17846bc, size 0xd8, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method StrokeFlow, addr 0x178492c, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StrokeFlow() ;

/// @brief Method Update, addr 0x1784794, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__beatColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__beatColor() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__beatColorGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__beatColorGetter() ;

constexpr int32_t const& __cordl_internal_get__beatDivision() const;

constexpr int32_t& __cordl_internal_get__beatDivision() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__beatVisual() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__beatVisual() ;

constexpr bool const& __cordl_internal_get__isOn() const;

constexpr bool& __cordl_internal_get__isOn() ;

constexpr int32_t const& __cordl_internal_get__lastSubdivision() const;

constexpr int32_t& __cordl_internal_get__lastSubdivision() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__offColor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__strikeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__strikeCurve() ;

constexpr float_t const& __cordl_internal_get__strikeduration() const;

constexpr float_t& __cordl_internal_get__strikeduration() ;

constexpr void __cordl_internal_set__beatColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__beatColorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__beatDivision(int32_t  value) ;

constexpr void __cordl_internal_set__beatVisual(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__isOn(bool  value) ;

constexpr void __cordl_internal_set__lastSubdivision(int32_t  value) ;

constexpr void __cordl_internal_set__offColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__strikeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__strikeduration(float_t  value) ;

/// @brief Method .ctor, addr 0x17849b4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TempoSyncDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempoSyncDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TempoSyncDisplay(TempoSyncDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempoSyncDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempoSyncDisplay(TempoSyncDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1314};

/// @brief Field _beatColorGetter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____beatColorGetter;

/// @brief Field _strikeCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____strikeCurve;

/// @brief Field _beatVisual, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____beatVisual;

/// @brief Field _beatDivision, offset: 0x38, size: 0x4, def value: None
 int32_t  ____beatDivision;

/// @brief Field _lastSubdivision, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____lastSubdivision;

/// @brief Field _strikeduration, offset: 0x40, size: 0x4, def value: None
 float_t  ____strikeduration;

/// @brief Field _isOn, offset: 0x44, size: 0x1, def value: None
 bool  ____isOn;

/// @brief Field _offColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____offColor;

/// @brief Field _beatColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____beatColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TempoSyncDisplay, ____beatColorGetter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____strikeCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____beatVisual) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____beatDivision) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____lastSubdivision) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____strikeduration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____isOn) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____offColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TempoSyncDisplay, ____beatColor) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TempoSyncDisplay, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TempoSyncDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TempoSyncDisplay*, "VROSC", "TempoSyncDisplay");
NEED_NO_BOX(::VROSC::TempoSyncDisplay__StrokeFlow_d__18);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TempoSyncDisplay__StrokeFlow_d__18*, "VROSC", "TempoSyncDisplay/<StrokeFlow>d__18");
