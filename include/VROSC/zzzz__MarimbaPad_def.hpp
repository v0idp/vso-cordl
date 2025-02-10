#pragma once
// IWYU pragma private; include "VROSC/MarimbaPad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MarimbaPad)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
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
class BoxCollider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class IntNode;
}
namespace VROSC {
class LocalTransformData;
}
namespace VROSC {
class MarimbaPadEffect;
}
namespace VROSC {
class MarimbaPad__AnimateHitCoroutine_d__32;
}
namespace VROSC {
class MarimbaPlayer;
}
namespace VROSC {
class Marimba;
}
namespace VROSC {
class PredictiveHittable;
}
// Forward declare root types
namespace VROSC {
class MarimbaPad;
}
namespace VROSC {
class MarimbaPad__AnimateHitCoroutine_d__32;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaPad);
MARK_REF_PTR_T(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaPad/<AnimateHitCoroutine>d__32
class CORDL_TYPE MarimbaPad__AnimateHitCoroutine_d__32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::MarimbaPad>  __4__this;

/// @brief Field <counter>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__counter_5__2, put=__cordl_internal_set__counter_5__2)) float_t  _counter_5__2;

/// @brief Field duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field power, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_power, put=__cordl_internal_set_power)) float_t  power;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17942f4, size 0x180, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::MarimbaPad__AnimateHitCoroutine_d__32* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1794474, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x179447c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17944b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17942f0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::MarimbaPad> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::MarimbaPad>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__counter_5__2() const;

constexpr float_t& __cordl_internal_get__counter_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_power() const;

constexpr float_t& __cordl_internal_get_power() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::MarimbaPad>  value) ;

constexpr void __cordl_internal_set__counter_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_power(float_t  value) ;

/// @brief Method .ctor, addr 0x1794204, size 0x28, virtual false, abstract: false, final false
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
constexpr MarimbaPad__AnimateHitCoroutine_d__32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPad__AnimateHitCoroutine_d__32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaPad__AnimateHitCoroutine_d__32(MarimbaPad__AnimateHitCoroutine_d__32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPad__AnimateHitCoroutine_d__32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaPad__AnimateHitCoroutine_d__32(MarimbaPad__AnimateHitCoroutine_d__32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1342};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MarimbaPad>  _____4__this;

/// @brief Field power, offset: 0x30, size: 0x4, def value: None
 float_t  ___power;

/// @brief Field <counter>5__2, offset: 0x34, size: 0x4, def value: None
 float_t  ____counter_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32, ___power) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32, ____counter_5__2) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaPad__AnimateHitCoroutine_d__32, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaPad
class CORDL_TYPE MarimbaPad : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AnimateHitCoroutine_d__32 = ::VROSC::MarimbaPad__AnimateHitCoroutine_d__32;

 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_LocalSpawnPosition, put=set_LocalSpawnPosition)) ::VROSC::LocalTransformData*  LocalSpawnPosition;

 __declspec(property(get=get_NoteNumber)) int32_t  NoteNumber;

/// @brief Field <Color>k__BackingField, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::UnityEngine::Color  _Color_k__BackingField;

/// @brief Field <LocalSpawnPosition>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalSpawnPosition_k__BackingField, put=__cordl_internal_set__LocalSpawnPosition_k__BackingField)) ::VROSC::LocalTransformData*  _LocalSpawnPosition_k__BackingField;

/// @brief Field _animateCoroutine, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__animateCoroutine, put=__cordl_internal_set__animateCoroutine)) ::UnityEngine::Coroutine*  _animateCoroutine;

/// @brief Field _animationSources, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationSources, put=__cordl_internal_set__animationSources)) ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,float_t>*  _animationSources;

/// @brief Field _hitAnimationCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitAnimationCurve, put=__cordl_internal_set__hitAnimationCurve)) ::UnityEngine::AnimationCurve*  _hitAnimationCurve;

/// @brief Field _hittable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__hittable, put=__cordl_internal_set__hittable)) ::UnityW<::VROSC::PredictiveHittable>  _hittable;

/// @brief Field _marimba, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__marimba, put=__cordl_internal_set__marimba)) ::UnityW<::VROSC::Marimba>  _marimba;

/// @brief Field _neighbors, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__neighbors, put=__cordl_internal_set__neighbors)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  _neighbors;

/// @brief Field _noteNumber, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteNumber, put=__cordl_internal_set__noteNumber)) ::UnityW<::VROSC::IntNode>  _noteNumber;

/// @brief Field _padVisual, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__padVisual, put=__cordl_internal_set__padVisual)) ::UnityW<::VROSC::MarimbaPadEffect>  _padVisual;

/// @brief Field _players, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::ArrayW<::UnityW<::VROSC::MarimbaPlayer>,::Array<::UnityW<::VROSC::MarimbaPlayer>>*>  _players;

/// @brief Field _powerAnimationCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__powerAnimationCurve, put=__cordl_internal_set__powerAnimationCurve)) ::UnityEngine::AnimationCurve*  _powerAnimationCurve;

/// @brief Field _sequenceText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sequenceText, put=__cordl_internal_set__sequenceText)) ::UnityW<::TMPro::TextMeshPro>  _sequenceText;

/// @brief Field _visualStartPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__visualStartPosition, put=__cordl_internal_set__visualStartPosition)) ::UnityEngine::Vector3  _visualStartPosition;

/// @brief Method AddSequenceText, addr 0x17929d8, size 0xc0, virtual false, abstract: false, final false
inline void AddSequenceText(::StringW  text) ;

/// @brief Method AnimateHitCoroutine, addr 0x179418c, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AnimateHitCoroutine(float_t  power, float_t  duration) ;

/// @brief Method AssignSequenceStep, addr 0x179415c, size 0x30, virtual false, abstract: false, final false
inline void AssignSequenceStep() ;

/// @brief Method DetermineNeighbors, addr 0x1791de4, size 0x1e0, virtual false, abstract: false, final false
inline void DetermineNeighbors(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  allPads, float_t  searchDistance) ;

/// @brief Method DisableSequenceMode, addr 0x17925fc, size 0x40, virtual false, abstract: false, final false
inline void DisableSequenceMode() ;

/// @brief Method EnableSequenceMode, addr 0x17925d0, size 0x2c, virtual false, abstract: false, final false
inline void EnableSequenceMode() ;

static inline ::VROSC::MarimbaPad* New_ctor() ;

/// @brief Method SetNoteAndColor, addr 0x1791d4c, size 0x98, virtual false, abstract: false, final false
inline void SetNoteAndColor(int32_t  noteNumber, ::UnityEngine::Color  color) ;

/// @brief Method SetSequenceText, addr 0x1792998, size 0x24, virtual false, abstract: false, final false
inline void SetSequenceText(::StringW  text) ;

/// @brief Method Setup, addr 0x1791b70, size 0x110, virtual false, abstract: false, final false
inline void Setup(::VROSC::Marimba*  marimba, ::VROSC::InstrumentController*  instrument, ::UnityEngine::BoxCollider*  sustainCollider) ;

/// @brief Method StartAnimation, addr 0x1793b1c, size 0x120, virtual false, abstract: false, final false
inline void StartAnimation(::VROSC::InputDevice*  device, float_t  power, float_t  duration) ;

/// @brief Method StopAnimation, addr 0x1793db4, size 0xc8, virtual false, abstract: false, final false
inline void StopAnimation(::VROSC::InputDevice*  device) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__Color_k__BackingField() ;

constexpr ::VROSC::LocalTransformData* const& __cordl_internal_get__LocalSpawnPosition_k__BackingField() const;

constexpr ::VROSC::LocalTransformData*& __cordl_internal_get__LocalSpawnPosition_k__BackingField() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__animateCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__animateCoroutine() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,float_t>* const& __cordl_internal_get__animationSources() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,float_t>*& __cordl_internal_get__animationSources() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__hitAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__hitAnimationCurve() ;

constexpr ::UnityW<::VROSC::PredictiveHittable> const& __cordl_internal_get__hittable() const;

constexpr ::UnityW<::VROSC::PredictiveHittable>& __cordl_internal_get__hittable() ;

constexpr ::UnityW<::VROSC::Marimba> const& __cordl_internal_get__marimba() const;

constexpr ::UnityW<::VROSC::Marimba>& __cordl_internal_get__marimba() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* const& __cordl_internal_get__neighbors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*& __cordl_internal_get__neighbors() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__noteNumber() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__noteNumber() ;

constexpr ::UnityW<::VROSC::MarimbaPadEffect> const& __cordl_internal_get__padVisual() const;

constexpr ::UnityW<::VROSC::MarimbaPadEffect>& __cordl_internal_get__padVisual() ;

constexpr ::ArrayW<::UnityW<::VROSC::MarimbaPlayer>,::Array<::UnityW<::VROSC::MarimbaPlayer>>*> const& __cordl_internal_get__players() const;

constexpr ::ArrayW<::UnityW<::VROSC::MarimbaPlayer>,::Array<::UnityW<::VROSC::MarimbaPlayer>>*>& __cordl_internal_get__players() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__powerAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__powerAnimationCurve() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__sequenceText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__sequenceText() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__visualStartPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__visualStartPosition() ;

constexpr void __cordl_internal_set__Color_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__LocalSpawnPosition_k__BackingField(::VROSC::LocalTransformData*  value) ;

constexpr void __cordl_internal_set__animateCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__animationSources(::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,float_t>*  value) ;

constexpr void __cordl_internal_set__hitAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__hittable(::UnityW<::VROSC::PredictiveHittable>  value) ;

constexpr void __cordl_internal_set__marimba(::UnityW<::VROSC::Marimba>  value) ;

constexpr void __cordl_internal_set__neighbors(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  value) ;

constexpr void __cordl_internal_set__noteNumber(::UnityW<::VROSC::IntNode>  value) ;

constexpr void __cordl_internal_set__padVisual(::UnityW<::VROSC::MarimbaPadEffect>  value) ;

constexpr void __cordl_internal_set__players(::ArrayW<::UnityW<::VROSC::MarimbaPlayer>,::Array<::UnityW<::VROSC::MarimbaPlayer>>*>  value) ;

constexpr void __cordl_internal_set__powerAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__sequenceText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__visualStartPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x179422c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x1794150, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_LocalSpawnPosition, addr 0x179413c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LocalTransformData* get_LocalSpawnPosition() ;

/// @brief Method get_NoteNumber, addr 0x17929bc, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_NoteNumber() ;

/// @brief Method set_Color, addr 0x1794144, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

/// @brief Method set_LocalSpawnPosition, addr 0x1794134, size 0x8, virtual false, abstract: false, final false
inline void set_LocalSpawnPosition(::VROSC::LocalTransformData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaPad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaPad(MarimbaPad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaPad(MarimbaPad const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1343};

/// @brief Field _noteNumber, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____noteNumber;

/// @brief Field _players, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::MarimbaPlayer>,::Array<::UnityW<::VROSC::MarimbaPlayer>>*>  ____players;

/// @brief Field _sequenceText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____sequenceText;

/// @brief Field _hittable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHittable>  ____hittable;

/// @brief Field _hitAnimationCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____hitAnimationCurve;

/// @brief Field _powerAnimationCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____powerAnimationCurve;

/// @brief Field _padVisual, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::MarimbaPadEffect>  ____padVisual;

/// @brief Field <LocalSpawnPosition>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::VROSC::LocalTransformData*  ____LocalSpawnPosition_k__BackingField;

/// @brief Field <Color>k__BackingField, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____Color_k__BackingField;

/// @brief Field _marimba, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::Marimba>  ____marimba;

/// @brief Field _visualStartPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____visualStartPosition;

/// @brief Field _animateCoroutine, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____animateCoroutine;

/// @brief Field _animationSources, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,float_t>*  ____animationSources;

/// @brief Field _neighbors, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  ____neighbors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaPad, ____noteNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____players) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____sequenceText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____hittable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____hitAnimationCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____powerAnimationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____padVisual) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____LocalSpawnPosition_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____Color_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____marimba) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____visualStartPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____animateCoroutine) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____animationSources) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPad, ____neighbors) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaPad, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaPad);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaPad*, "VROSC", "MarimbaPad");
NEED_NO_BOX(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaPad__AnimateHitCoroutine_d__32*, "VROSC", "MarimbaPad/<AnimateHitCoroutine>d__32");
