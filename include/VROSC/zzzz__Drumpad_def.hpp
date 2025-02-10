#pragma once
// IWYU pragma private; include "VROSC/Drumpad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Drumpad)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Collider;
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
namespace VROSC {
class DrumpadPlayer;
}
namespace VROSC {
class DrumpadSpawner;
}
namespace VROSC {
class DrumpadUI;
}
namespace VROSC {
class Drumpad__Fade_d__38;
}
namespace VROSC {
class Drumpad__Timer_d__37;
}
namespace VROSC {
class Drumpad___c__DisplayClass24_0;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class ModularDrumsController;
}
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class Drumpad;
}
namespace VROSC {
class Drumpad__Fade_d__38;
}
namespace VROSC {
class Drumpad__Timer_d__37;
}
namespace VROSC {
class Drumpad___c__DisplayClass24_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Drumpad);
MARK_REF_PTR_T(::VROSC::Drumpad__Fade_d__38);
MARK_REF_PTR_T(::VROSC::Drumpad__Timer_d__37);
MARK_REF_PTR_T(::VROSC::Drumpad___c__DisplayClass24_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Drumpad/<>c__DisplayClass24_0
class CORDL_TYPE Drumpad___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::Drumpad>  __4__this;

/// @brief Field empadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_empadId, put=__cordl_internal_set_empadId)) int32_t  empadId;

static inline ::VROSC::Drumpad___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <Setup>b__0, addr 0x170a19c, size 0x138, virtual false, abstract: false, final false
inline void _Setup_b__0(bool  success, ::UnityEngine::Vector3  anchorPosition, ::UnityEngine::Quaternion  anchorRotation) ;

/// @brief Method <Setup>b__1, addr 0x170a2d4, size 0xb0, virtual false, abstract: false, final false
inline void _Setup_b__1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::Drumpad> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::Drumpad>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_empadId() const;

constexpr int32_t& __cordl_internal_get_empadId() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::Drumpad>  value) ;

constexpr void __cordl_internal_set_empadId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1709658, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Drumpad___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Drumpad___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Drumpad___c__DisplayClass24_0(Drumpad___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Drumpad___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Drumpad___c__DisplayClass24_0(Drumpad___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{865};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::Drumpad>  _____4__this;

/// @brief Field empadId, offset: 0x18, size: 0x4, def value: None
 int32_t  ___empadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Drumpad___c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad___c__DisplayClass24_0, ___empadId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Drumpad___c__DisplayClass24_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Color
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Drumpad/<Fade>d__38
class CORDL_TYPE Drumpad__Fade_d__38 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::Drumpad>  __4__this;

/// @brief Field <progression>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__progression_5__2, put=__cordl_internal_set__progression_5__2)) float_t  _progression_5__2;

/// @brief Field <startColor>5__4, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__startColor_5__4, put=__cordl_internal_set__startColor_5__4)) ::UnityEngine::Color  _startColor_5__4;

/// @brief Field <targetColor>5__5, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetColor_5__5, put=__cordl_internal_set__targetColor_5__5)) ::UnityEngine::Color  _targetColor_5__5;

/// @brief Field <time>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__3, put=__cordl_internal_set__time_5__3)) float_t  _time_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x170a388, size 0x10c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::Drumpad__Fade_d__38* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x170a494, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x170a49c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x170a4d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x170a384, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::Drumpad> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::Drumpad>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__progression_5__2() const;

constexpr float_t& __cordl_internal_get__progression_5__2() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor_5__4() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor_5__4() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__targetColor_5__5() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__targetColor_5__5() ;

constexpr float_t const& __cordl_internal_get__time_5__3() const;

constexpr float_t& __cordl_internal_get__time_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::Drumpad>  value) ;

constexpr void __cordl_internal_set__progression_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startColor_5__4(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__targetColor_5__5(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__time_5__3(float_t  value) ;

/// @brief Method .ctor, addr 0x170a108, size 0x28, virtual false, abstract: false, final false
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
constexpr Drumpad__Fade_d__38() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Drumpad__Fade_d__38", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Drumpad__Fade_d__38(Drumpad__Fade_d__38 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Drumpad__Fade_d__38", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Drumpad__Fade_d__38(Drumpad__Fade_d__38 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{866};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Drumpad>  _____4__this;

/// @brief Field <progression>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____progression_5__2;

/// @brief Field <time>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____time_5__3;

/// @brief Field <startColor>5__4, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor_5__4;

/// @brief Field <targetColor>5__5, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____targetColor_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Drumpad__Fade_d__38, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Fade_d__38, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Fade_d__38, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Fade_d__38, ____progression_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Fade_d__38, ____time_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Fade_d__38, ____startColor_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Fade_d__38, ____targetColor_5__5) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Drumpad__Fade_d__38, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Drumpad/<Timer>d__37
class CORDL_TYPE Drumpad__Timer_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::Drumpad>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x170a4e0, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::Drumpad__Timer_d__37* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x170a5a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x170a5a8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x170a5e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x170a4dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::Drumpad> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::Drumpad>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::Drumpad>  value) ;

/// @brief Method .ctor, addr 0x170a080, size 0x28, virtual false, abstract: false, final false
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
constexpr Drumpad__Timer_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Drumpad__Timer_d__37", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Drumpad__Timer_d__37(Drumpad__Timer_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Drumpad__Timer_d__37", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Drumpad__Timer_d__37(Drumpad__Timer_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{867};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Drumpad>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Drumpad__Timer_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Timer_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad__Timer_d__37, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Drumpad__Timer_d__37, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.IAnchoredObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Drumpad
class CORDL_TYPE Drumpad : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Fade_d__38 = ::VROSC::Drumpad__Fade_d__38;

using _Timer_d__37 = ::VROSC::Drumpad__Timer_d__37;

using __c__DisplayClass24_0 = ::VROSC::Drumpad___c__DisplayClass24_0;

 __declspec(property(get=get_DrumpadPlayer)) ::UnityW<::VROSC::DrumpadPlayer>  DrumpadPlayer;

 __declspec(property(get=get_DrumpadSpawner)) ::UnityW<::VROSC::DrumpadSpawner>  DrumpadSpawner;

/// @brief Field OnRemoveDrumpad, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRemoveDrumpad, put=__cordl_internal_set_OnRemoveDrumpad)) ::System::Action_1<::UnityW<::VROSC::Drumpad>>*  OnRemoveDrumpad;

 __declspec(property(get=get_TransformMover)) ::UnityW<::VROSC::TransformMover>  TransformMover;

/// @brief Field _UI, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__UI, put=__cordl_internal_set__UI)) ::UnityW<::VROSC::DrumpadUI>  _UI;

/// @brief Field _drumpadSpawner, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumpadSpawner, put=__cordl_internal_set__drumpadSpawner)) ::UnityW<::VROSC::DrumpadSpawner>  _drumpadSpawner;

/// @brief Field _empadId, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__empadId, put=__cordl_internal_set__empadId)) int32_t  _empadId;

/// @brief Field _enterTimeline, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__enterTimeline, put=__cordl_internal_set__enterTimeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _enterTimeline;

/// @brief Field _exitTimeline, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__exitTimeline, put=__cordl_internal_set__exitTimeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _exitTimeline;

/// @brief Field _hintText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__hintText, put=__cordl_internal_set__hintText)) ::UnityW<::TMPro::TextMeshPro>  _hintText;

/// @brief Field _instrumentController, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::ModularDrumsController>  _instrumentController;

/// @brief Field _mover, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::TransformMover>  _mover;

/// @brief Field _overlappingSpawner, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlappingSpawner, put=__cordl_internal_set__overlappingSpawner)) ::UnityW<::VROSC::DrumpadSpawner>  _overlappingSpawner;

/// @brief Field _overlaps, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlaps, put=__cordl_internal_set__overlaps)) ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  _overlaps;

/// @brief Field _parent, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::UnityEngine::Transform>  _parent;

/// @brief Field _playableDirector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__playableDirector, put=__cordl_internal_set__playableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _playableDirector;

/// @brief Field _player, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::VROSC::DrumpadPlayer>  _player;

/// @brief Field _spawnerDeleteDistance, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnerDeleteDistance, put=__cordl_internal_set__spawnerDeleteDistance)) float_t  _spawnerDeleteDistance;

/// @brief Field _untilFadeTimer, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__untilFadeTimer, put=__cordl_internal_set__untilFadeTimer)) float_t  _untilFadeTimer;

/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr operator  ::VROSC::IAnchoredObject*() noexcept;

/// @brief Method AddSpatialAnchorToData, addr 0x1709efc, size 0x40, virtual true, abstract: false, final true
inline void AddSpatialAnchorToData(::StringW  anchorUuid) ;

/// @brief Method Awake, addr 0x1708a98, size 0x3e0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Delete, addr 0x1709d20, size 0x68, virtual false, abstract: false, final false
inline void Delete() ;

/// @brief Method Delete, addr 0x1709e30, size 0xcc, virtual false, abstract: false, final false
inline void Delete(bool  removeFromController) ;

/// @brief Method Fade, addr 0x170a0a8, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Fade() ;

/// @brief Method Grab, addr 0x1709a88, size 0x24, virtual false, abstract: false, final false
inline void Grab(::VROSC::GrabData*  grabData, bool  grabbing) ;

/// @brief Method GrabEnded, addr 0x1709aac, size 0x274, virtual false, abstract: false, final false
inline void GrabEnded(::VROSC::TransformMover*  mover) ;

static inline ::VROSC::Drumpad* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1708e78, size 0x3cc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveSpatialAnchorFromData, addr 0x1709f3c, size 0x40, virtual true, abstract: false, final true
inline void RemoveSpatialAnchorFromData(::StringW  anchorUuid) ;

/// @brief Method SetActive, addr 0x170993c, size 0xa4, virtual false, abstract: false, final false
inline void SetActive(bool  isActive) ;

/// @brief Method SetDrumSampleOrNoteNumber, addr 0x170980c, size 0x1c, virtual false, abstract: false, final false
inline void SetDrumSampleOrNoteNumber(int32_t  sampleIdOrNoteNumber, bool  preview) ;

/// @brief Method SetDrumUseVelocity, addr 0x1709f7c, size 0x60, virtual false, abstract: false, final false
inline void SetDrumUseVelocity(bool  useVelocity) ;

/// @brief Method SetPitch, addr 0x1709fdc, size 0x54, virtual false, abstract: false, final false
inline void SetPitch(int32_t  pitch) ;

/// @brief Method SetVolume, addr 0x170a030, size 0x50, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method Setup, addr 0x1709244, size 0x414, virtual false, abstract: false, final false
inline void Setup(::VROSC::DrumpadSpawner*  drumpadSpawner, int32_t  empadId, ::UnityEngine::Transform*  parent, ::VROSC::ModularDrumsController*  instrumentController) ;

/// @brief Method ShowHint, addr 0x17099e0, size 0x48, virtual false, abstract: false, final false
inline void ShowHint() ;

/// @brief Method Timer, addr 0x1709a28, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Timer() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Drumpad>>* const& __cordl_internal_get_OnRemoveDrumpad() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Drumpad>>*& __cordl_internal_get_OnRemoveDrumpad() ;

constexpr ::UnityW<::VROSC::DrumpadUI> const& __cordl_internal_get__UI() const;

constexpr ::UnityW<::VROSC::DrumpadUI>& __cordl_internal_get__UI() ;

constexpr ::UnityW<::VROSC::DrumpadSpawner> const& __cordl_internal_get__drumpadSpawner() const;

constexpr ::UnityW<::VROSC::DrumpadSpawner>& __cordl_internal_get__drumpadSpawner() ;

constexpr int32_t const& __cordl_internal_get__empadId() const;

constexpr int32_t& __cordl_internal_get__empadId() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__enterTimeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__enterTimeline() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__exitTimeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__exitTimeline() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__hintText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__hintText() ;

constexpr ::UnityW<::VROSC::ModularDrumsController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::ModularDrumsController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__mover() ;

constexpr ::UnityW<::VROSC::DrumpadSpawner> const& __cordl_internal_get__overlappingSpawner() const;

constexpr ::UnityW<::VROSC::DrumpadSpawner>& __cordl_internal_get__overlappingSpawner() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__overlaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get__overlaps() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parent() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__playableDirector() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__playableDirector() ;

constexpr ::UnityW<::VROSC::DrumpadPlayer> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::VROSC::DrumpadPlayer>& __cordl_internal_get__player() ;

constexpr float_t const& __cordl_internal_get__spawnerDeleteDistance() const;

constexpr float_t& __cordl_internal_get__spawnerDeleteDistance() ;

constexpr float_t const& __cordl_internal_get__untilFadeTimer() const;

constexpr float_t& __cordl_internal_get__untilFadeTimer() ;

constexpr void __cordl_internal_set_OnRemoveDrumpad(::System::Action_1<::UnityW<::VROSC::Drumpad>>*  value) ;

constexpr void __cordl_internal_set__UI(::UnityW<::VROSC::DrumpadUI>  value) ;

constexpr void __cordl_internal_set__drumpadSpawner(::UnityW<::VROSC::DrumpadSpawner>  value) ;

constexpr void __cordl_internal_set__empadId(int32_t  value) ;

constexpr void __cordl_internal_set__enterTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__exitTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__hintText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::ModularDrumsController>  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__overlappingSpawner(::UnityW<::VROSC::DrumpadSpawner>  value) ;

constexpr void __cordl_internal_set__overlaps(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value) ;

constexpr void __cordl_internal_set__parent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__playableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set__player(::UnityW<::VROSC::DrumpadPlayer>  value) ;

constexpr void __cordl_internal_set__spawnerDeleteDistance(float_t  value) ;

constexpr void __cordl_internal_set__untilFadeTimer(float_t  value) ;

/// @brief Method .ctor, addr 0x170a130, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DrumpadPlayer, addr 0x1708a88, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::DrumpadPlayer> get_DrumpadPlayer() ;

/// @brief Method get_DrumpadSpawner, addr 0x1708a80, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::DrumpadSpawner> get_DrumpadSpawner() ;

/// @brief Method get_TransformMover, addr 0x1708a90, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::VROSC::TransformMover> get_TransformMover() ;

/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* i___VROSC__IAnchoredObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Drumpad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Drumpad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Drumpad(Drumpad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Drumpad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Drumpad(Drumpad const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{868};

/// @brief Field _mover, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____mover;

/// @brief Field _player, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadPlayer>  ____player;

/// @brief Field _UI, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadUI>  ____UI;

/// @brief Field _playableDirector, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____playableDirector;

/// @brief Field _enterTimeline, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____enterTimeline;

/// @brief Field _exitTimeline, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____exitTimeline;

/// @brief Field _hintText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____hintText;

/// @brief Field _untilFadeTimer, offset: 0x58, size: 0x4, def value: None
 float_t  ____untilFadeTimer;

/// @brief Field _overlaps, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  ____overlaps;

/// @brief Field _overlappingSpawner, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadSpawner>  ____overlappingSpawner;

/// @brief Field _spawnerDeleteDistance, offset: 0x70, size: 0x4, def value: None
 float_t  ____spawnerDeleteDistance;

/// @brief Field _drumpadSpawner, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadSpawner>  ____drumpadSpawner;

/// @brief Field _empadId, offset: 0x80, size: 0x4, def value: None
 int32_t  ____empadId;

/// @brief Field _parent, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____parent;

/// @brief Field _instrumentController, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::ModularDrumsController>  ____instrumentController;

/// @brief Field OnRemoveDrumpad, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Drumpad>>*  ___OnRemoveDrumpad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Drumpad, ____mover) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____player) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____UI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____playableDirector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____enterTimeline) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____exitTimeline) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____hintText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____untilFadeTimer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____overlaps) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____overlappingSpawner) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____spawnerDeleteDistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____drumpadSpawner) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____empadId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____parent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ____instrumentController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::Drumpad, ___OnRemoveDrumpad) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Drumpad, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Drumpad);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Drumpad*, "VROSC", "Drumpad");
NEED_NO_BOX(::VROSC::Drumpad__Fade_d__38);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Drumpad__Fade_d__38*, "VROSC", "Drumpad/<Fade>d__38");
NEED_NO_BOX(::VROSC::Drumpad__Timer_d__37);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Drumpad__Timer_d__37*, "VROSC", "Drumpad/<Timer>d__37");
NEED_NO_BOX(::VROSC::Drumpad___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Drumpad___c__DisplayClass24_0*, "VROSC", "Drumpad/<>c__DisplayClass24_0");
