#pragma once
// IWYU pragma private; include "VROSC/DrumpadSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Grabable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrumpadSpawner)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI {
class DrumSampleSwitcherUI;
}
namespace VROSC {
class DrumPadEffectOnSignal;
}
namespace VROSC {
class DrumpadPlayer;
}
namespace VROSC {
class DrumpadSpawner__CoHighlight_d__30;
}
namespace VROSC {
class Drumpad;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class ModularDrumsController;
}
namespace VROSC {
class TransformMoverRelay;
}
// Forward declare root types
namespace VROSC {
class DrumpadSpawner;
}
namespace VROSC {
class DrumpadSpawner__CoHighlight_d__30;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumpadSpawner);
MARK_REF_PTR_T(::VROSC::DrumpadSpawner__CoHighlight_d__30);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadSpawner/<CoHighlight>d__30
class CORDL_TYPE DrumpadSpawner__CoHighlight_d__30 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::DrumpadSpawner>  __4__this;

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

/// @brief Method MoveNext, addr 0x170bdfc, size 0x1d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::DrumpadSpawner__CoHighlight_d__30* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x170bfcc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x170bfd4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x170c00c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x170bdf8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::DrumpadSpawner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::DrumpadSpawner>& __cordl_internal_get___4__this() ;

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

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::DrumpadSpawner>  value) ;

constexpr void __cordl_internal_set___animationTimer_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startScale_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetScale_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_highlight(bool  value) ;

/// @brief Method .ctor, addr 0x170b694, size 0x28, virtual false, abstract: false, final false
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
constexpr DrumpadSpawner__CoHighlight_d__30() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadSpawner__CoHighlight_d__30", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadSpawner__CoHighlight_d__30(DrumpadSpawner__CoHighlight_d__30 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadSpawner__CoHighlight_d__30", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadSpawner__CoHighlight_d__30(DrumpadSpawner__CoHighlight_d__30 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{870};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadSpawner>  _____4__this;

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
static_assert(offsetof(::VROSC::DrumpadSpawner__CoHighlight_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner__CoHighlight_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner__CoHighlight_d__30, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner__CoHighlight_d__30, ___highlight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner__CoHighlight_d__30, _____animationTimer_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner__CoHighlight_d__30, ____startScale_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner__CoHighlight_d__30, ____targetScale_5__4) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadSpawner__CoHighlight_d__30, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.Grabable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadSpawner
class CORDL_TYPE DrumpadSpawner : public ::VROSC::Grabable {
public:
// Declarations
using _CoHighlight_d__30 = ::VROSC::DrumpadSpawner__CoHighlight_d__30;

 __declspec(property(get=get_DrumpadsCount)) int32_t  DrumpadsCount;

/// @brief Field _drumpads, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumpads, put=__cordl_internal_set__drumpads)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Drumpad>>*  _drumpads;

/// @brief Field _empadId, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__empadId, put=__cordl_internal_set__empadId)) int32_t  _empadId;

/// @brief Field _forceHighlight, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceHighlight, put=__cordl_internal_set__forceHighlight)) bool  _forceHighlight;

/// @brief Field _headerText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerText, put=__cordl_internal_set__headerText)) ::UnityW<::TMPro::TextMeshPro>  _headerText;

/// @brief Field _highlightAnimationCurve, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightAnimationCurve, put=__cordl_internal_set__highlightAnimationCurve)) ::UnityEngine::AnimationCurve*  _highlightAnimationCurve;

/// @brief Field _highlightAnimationDuration, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightAnimationDuration, put=__cordl_internal_set__highlightAnimationDuration)) float_t  _highlightAnimationDuration;

/// @brief Field _highlightRoutine, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightRoutine, put=__cordl_internal_set__highlightRoutine)) ::UnityEngine::Coroutine*  _highlightRoutine;

/// @brief Field _hintText, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__hintText, put=__cordl_internal_set__hintText)) ::UnityW<::UnityEngine::GameObject>  _hintText;

/// @brief Field _hoverLengthToGrab, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverLengthToGrab, put=__cordl_internal_set__hoverLengthToGrab)) float_t  _hoverLengthToGrab;

/// @brief Field _hoveringTimer, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoveringTimer, put=__cordl_internal_set__hoveringTimer)) float_t  _hoveringTimer;

/// @brief Field _instrumentController, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::ModularDrumsController>  _instrumentController;

/// @brief Field _isHighlighted, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHighlighted, put=__cordl_internal_set__isHighlighted)) bool  _isHighlighted;

/// @brief Field _lastSpawnedDrumpad, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSpawnedDrumpad, put=__cordl_internal_set__lastSpawnedDrumpad)) ::UnityW<::VROSC::Drumpad>  _lastSpawnedDrumpad;

/// @brief Field _moveRelay, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__moveRelay, put=__cordl_internal_set__moveRelay)) ::UnityW<::VROSC::TransformMoverRelay>  _moveRelay;

/// @brief Field _parent, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::UnityEngine::Transform>  _parent;

/// @brief Field _player, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::VROSC::DrumpadPlayer>  _player;

/// @brief Field _prefab, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefab, put=__cordl_internal_set__prefab)) ::UnityW<::VROSC::Drumpad>  _prefab;

/// @brief Field _preview, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) ::UnityW<::VROSC::DrumPadEffectOnSignal>  _preview;

/// @brief Field _spawnScaleMultiplier, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnScaleMultiplier, put=__cordl_internal_set__spawnScaleMultiplier)) float_t  _spawnScaleMultiplier;

/// @brief Field _switcher, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__switcher, put=__cordl_internal_set__switcher)) ::UnityW<::VROSC::UI::DrumSampleSwitcherUI>  _switcher;

/// @brief Method Awake, addr 0x170a7b0, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CoHighlight, addr 0x170b620, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoHighlight(bool  highlight) ;

/// @brief Method Colorize, addr 0x170b35c, size 0x20, virtual false, abstract: false, final false
inline void Colorize(::UnityEngine::Color  color) ;

/// @brief Method DeleteAll, addr 0x170bbe4, size 0x84, virtual false, abstract: false, final false
inline void DeleteAll() ;

/// @brief Method ForceHighlight, addr 0x170b614, size 0xc, virtual false, abstract: false, final false
inline void ForceHighlight(bool  forceHighlight) ;

/// @brief Method Grab, addr 0x170b6d8, size 0x268, virtual true, abstract: false, final false
inline void Grab(::VROSC::GrabData*  grabData, bool  grabbing) ;

/// @brief Method Highlight, addr 0x170b5b0, size 0x64, virtual false, abstract: false, final false
inline void Highlight(bool  highlight) ;

/// @brief Method LoadDrumpad, addr 0x170b37c, size 0x1b4, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Drumpad> LoadDrumpad(int32_t  empadId) ;

static inline ::VROSC::DrumpadSpawner* New_ctor() ;

/// @brief Method OnDestroy, addr 0x170b000, size 0x19c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Refresh, addr 0x170ab40, size 0x4c0, virtual false, abstract: false, final false
inline void Refresh(int32_t  groupId, int32_t  fixedEmpadId) ;

/// @brief Method RemovedDrumpad, addr 0x170bc68, size 0xfc, virtual false, abstract: false, final false
inline void RemovedDrumpad(::VROSC::Drumpad*  drumpad) ;

/// @brief Method SetActive, addr 0x170b19c, size 0x19c, virtual false, abstract: false, final false
inline void SetActive(bool  isActive) ;

/// @brief Method SetDrumSampleOrNoteNumber, addr 0x170b6bc, size 0x1c, virtual false, abstract: false, final false
inline void SetDrumSampleOrNoteNumber(int32_t  sampleIdOrNoteNumber, bool  preview) ;

/// @brief Method Setup, addr 0x170a94c, size 0x1f4, virtual false, abstract: false, final false
inline void Setup(int32_t  groupId, ::VROSC::ModularDrumsController*  instrumentController) ;

/// @brief Method SpawnDrumpad, addr 0x170b940, size 0x2a4, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Drumpad> SpawnDrumpad(int32_t  empadId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  scale) ;

/// @brief Method SynthesizerChanged, addr 0x170b338, size 0x24, virtual false, abstract: false, final false
inline void SynthesizerChanged(bool  useExternal) ;

/// @brief Method Update, addr 0x170b530, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Drumpad>>* const& __cordl_internal_get__drumpads() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Drumpad>>*& __cordl_internal_get__drumpads() ;

constexpr int32_t const& __cordl_internal_get__empadId() const;

constexpr int32_t& __cordl_internal_get__empadId() ;

constexpr bool const& __cordl_internal_get__forceHighlight() const;

constexpr bool& __cordl_internal_get__forceHighlight() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__headerText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__headerText() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__highlightAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__highlightAnimationCurve() ;

constexpr float_t const& __cordl_internal_get__highlightAnimationDuration() const;

constexpr float_t& __cordl_internal_get__highlightAnimationDuration() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__highlightRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__highlightRoutine() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hintText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hintText() ;

constexpr float_t const& __cordl_internal_get__hoverLengthToGrab() const;

constexpr float_t& __cordl_internal_get__hoverLengthToGrab() ;

constexpr float_t const& __cordl_internal_get__hoveringTimer() const;

constexpr float_t& __cordl_internal_get__hoveringTimer() ;

constexpr ::UnityW<::VROSC::ModularDrumsController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::ModularDrumsController>& __cordl_internal_get__instrumentController() ;

constexpr bool const& __cordl_internal_get__isHighlighted() const;

constexpr bool& __cordl_internal_get__isHighlighted() ;

constexpr ::UnityW<::VROSC::Drumpad> const& __cordl_internal_get__lastSpawnedDrumpad() const;

constexpr ::UnityW<::VROSC::Drumpad>& __cordl_internal_get__lastSpawnedDrumpad() ;

constexpr ::UnityW<::VROSC::TransformMoverRelay> const& __cordl_internal_get__moveRelay() const;

constexpr ::UnityW<::VROSC::TransformMoverRelay>& __cordl_internal_get__moveRelay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parent() ;

constexpr ::UnityW<::VROSC::DrumpadPlayer> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::VROSC::DrumpadPlayer>& __cordl_internal_get__player() ;

constexpr ::UnityW<::VROSC::Drumpad> const& __cordl_internal_get__prefab() const;

constexpr ::UnityW<::VROSC::Drumpad>& __cordl_internal_get__prefab() ;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal> const& __cordl_internal_get__preview() const;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal>& __cordl_internal_get__preview() ;

constexpr float_t const& __cordl_internal_get__spawnScaleMultiplier() const;

constexpr float_t& __cordl_internal_get__spawnScaleMultiplier() ;

constexpr ::UnityW<::VROSC::UI::DrumSampleSwitcherUI> const& __cordl_internal_get__switcher() const;

constexpr ::UnityW<::VROSC::UI::DrumSampleSwitcherUI>& __cordl_internal_get__switcher() ;

constexpr void __cordl_internal_set__drumpads(::System::Collections::Generic::List_1<::UnityW<::VROSC::Drumpad>>*  value) ;

constexpr void __cordl_internal_set__empadId(int32_t  value) ;

constexpr void __cordl_internal_set__forceHighlight(bool  value) ;

constexpr void __cordl_internal_set__headerText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__highlightAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__highlightAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set__highlightRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__hintText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__hoverLengthToGrab(float_t  value) ;

constexpr void __cordl_internal_set__hoveringTimer(float_t  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::ModularDrumsController>  value) ;

constexpr void __cordl_internal_set__isHighlighted(bool  value) ;

constexpr void __cordl_internal_set__lastSpawnedDrumpad(::UnityW<::VROSC::Drumpad>  value) ;

constexpr void __cordl_internal_set__moveRelay(::UnityW<::VROSC::TransformMoverRelay>  value) ;

constexpr void __cordl_internal_set__parent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__player(::UnityW<::VROSC::DrumpadPlayer>  value) ;

constexpr void __cordl_internal_set__prefab(::UnityW<::VROSC::Drumpad>  value) ;

constexpr void __cordl_internal_set__preview(::UnityW<::VROSC::DrumPadEffectOnSignal>  value) ;

constexpr void __cordl_internal_set__spawnScaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__switcher(::UnityW<::VROSC::UI::DrumSampleSwitcherUI>  value) ;

/// @brief Method .ctor, addr 0x170bd64, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DrumpadsCount, addr 0x170a768, size 0x48, virtual false, abstract: false, final false
inline int32_t get_DrumpadsCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumpadSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadSpawner(DrumpadSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadSpawner(DrumpadSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{871};

/// @brief Field _player, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadPlayer>  ____player;

/// @brief Field _headerText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____headerText;

/// @brief Field _switcher, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::DrumSampleSwitcherUI>  ____switcher;

/// @brief Field _prefab, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::Drumpad>  ____prefab;

/// @brief Field _preview, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumPadEffectOnSignal>  ____preview;

/// @brief Field _parent, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____parent;

/// @brief Field _moveRelay, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMoverRelay>  ____moveRelay;

/// @brief Field _spawnScaleMultiplier, offset: 0xb0, size: 0x4, def value: None
 float_t  ____spawnScaleMultiplier;

/// @brief Field _hoverLengthToGrab, offset: 0xb4, size: 0x4, def value: None
 float_t  ____hoverLengthToGrab;

/// @brief Field _highlightAnimationCurve, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____highlightAnimationCurve;

/// @brief Field _highlightAnimationDuration, offset: 0xc0, size: 0x4, def value: None
 float_t  ____highlightAnimationDuration;

/// @brief Field _hintText, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____hintText;

/// @brief Field _instrumentController, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::VROSC::ModularDrumsController>  ____instrumentController;

/// @brief Field _empadId, offset: 0xd8, size: 0x4, def value: None
 int32_t  ____empadId;

/// @brief Field _drumpads, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Drumpad>>*  ____drumpads;

/// @brief Field _lastSpawnedDrumpad, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::VROSC::Drumpad>  ____lastSpawnedDrumpad;

/// @brief Field _hoveringTimer, offset: 0xf0, size: 0x4, def value: None
 float_t  ____hoveringTimer;

/// @brief Field _highlightRoutine, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____highlightRoutine;

/// @brief Field _isHighlighted, offset: 0x100, size: 0x1, def value: None
 bool  ____isHighlighted;

/// @brief Field _forceHighlight, offset: 0x101, size: 0x1, def value: None
 bool  ____forceHighlight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadSpawner, ____player) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____headerText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____switcher) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____prefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____preview) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____parent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____moveRelay) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____spawnScaleMultiplier) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____hoverLengthToGrab) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____highlightAnimationCurve) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____highlightAnimationDuration) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____hintText) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____instrumentController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____empadId) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____drumpads) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____lastSpawnedDrumpad) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____hoveringTimer) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____highlightRoutine) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____isHighlighted) == 0x100, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadSpawner, ____forceHighlight) == 0x101, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadSpawner, 0x108>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumpadSpawner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadSpawner*, "VROSC", "DrumpadSpawner");
NEED_NO_BOX(::VROSC::DrumpadSpawner__CoHighlight_d__30);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadSpawner__CoHighlight_d__30*, "VROSC", "DrumpadSpawner/<CoHighlight>d__30");
