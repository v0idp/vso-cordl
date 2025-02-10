#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerAutoMover.hpp"
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
CORDL_MODULE_EXPORT(LoopPlayerAutoMover)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class LoopPlayerAutoMover__MovePlayerFlow_d__7;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroup;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerAutoMover;
}
namespace VROSC {
class LoopPlayerAutoMover__MovePlayerFlow_d__7;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerAutoMover);
MARK_REF_PTR_T(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerAutoMover/<MovePlayerFlow>d__7
class CORDL_TYPE LoopPlayerAutoMover__MovePlayerFlow_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopPlayerAutoMover>  __4__this;

/// @brief Field <startPosition>5__3, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition_5__3, put=__cordl_internal_set__startPosition_5__3)) ::UnityEngine::Vector3  _startPosition_5__3;

/// @brief Field <time>5__2, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field from, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_from, put=__cordl_internal_set_from)) ::UnityW<::VROSC::LoopStationGroup>  from;

/// @brief Field to, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityW<::VROSC::LoopStationGroup>  to;

/// @brief Field zmultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_zmultiplier, put=__cordl_internal_set_zmultiplier)) float_t  zmultiplier;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18bd4cc, size 0x25c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18bd728, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18bd730, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18bd768, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18bd4c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::LoopPlayerAutoMover> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopPlayerAutoMover>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get_from() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get_from() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get_to() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get_to() ;

constexpr float_t const& __cordl_internal_get_zmultiplier() const;

constexpr float_t& __cordl_internal_get_zmultiplier() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopPlayerAutoMover>  value) ;

constexpr void __cordl_internal_set__startPosition_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_from(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set_to(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set_zmultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x18bd498, size 0x28, virtual false, abstract: false, final false
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
constexpr LoopPlayerAutoMover__MovePlayerFlow_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerAutoMover__MovePlayerFlow_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerAutoMover__MovePlayerFlow_d__7(LoopPlayerAutoMover__MovePlayerFlow_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerAutoMover__MovePlayerFlow_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerAutoMover__MovePlayerFlow_d__7(LoopPlayerAutoMover__MovePlayerFlow_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{745};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerAutoMover>  _____4__this;

/// @brief Field from, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ___from;

/// @brief Field to, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ___to;

/// @brief Field zmultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ___zmultiplier;

/// @brief Field <time>5__2, offset: 0x3c, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <startPosition>5__3, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, ___from) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, ___to) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, ___zmultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, ____time_5__2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, ____startPosition_5__3) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerAutoMover
class CORDL_TYPE LoopPlayerAutoMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MovePlayerFlow_d__7 = ::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7;

/// @brief Field _loopPlayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _moveCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__moveCurve, put=__cordl_internal_set__moveCurve)) ::UnityEngine::AnimationCurve*  _moveCurve;

/// @brief Field _moveDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveDuration, put=__cordl_internal_set__moveDuration)) float_t  _moveDuration;

/// @brief Field _moveOutDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveOutDistance, put=__cordl_internal_set__moveOutDistance)) float_t  _moveOutDistance;

/// @brief Field _zCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__zCurve, put=__cordl_internal_set__zCurve)) ::UnityEngine::AnimationCurve*  _zCurve;

/// @brief Method MoveLoopPlayer, addr 0x18b11c4, size 0x138, virtual false, abstract: false, final false
inline void MoveLoopPlayer(::VROSC::LoopStationGroup*  from, ::VROSC::LoopStationGroup*  to, float_t  zmultiplier) ;

/// @brief Method MovePlayerFlow, addr 0x18bd414, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MovePlayerFlow(::VROSC::LoopStationGroup*  from, ::VROSC::LoopStationGroup*  to, float_t  zmultiplier) ;

static inline ::VROSC::LoopPlayerAutoMover* New_ctor() ;

/// @brief Method SetObjectsInteractable, addr 0x18bd368, size 0xac, virtual false, abstract: false, final false
inline void SetObjectsInteractable(::VROSC::LoopStationGroup*  from, ::VROSC::LoopStationGroup*  to, bool  interactable) ;

/// @brief Method Setup, addr 0x18bd360, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopPlayer*  loopPlayer) ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__moveCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__moveCurve() ;

constexpr float_t const& __cordl_internal_get__moveDuration() const;

constexpr float_t& __cordl_internal_get__moveDuration() ;

constexpr float_t const& __cordl_internal_get__moveOutDistance() const;

constexpr float_t& __cordl_internal_get__moveOutDistance() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__zCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__zCurve() ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__moveCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__moveDuration(float_t  value) ;

constexpr void __cordl_internal_set__moveOutDistance(float_t  value) ;

constexpr void __cordl_internal_set__zCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x18bd4c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerAutoMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerAutoMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerAutoMover(LoopPlayerAutoMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerAutoMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerAutoMover(LoopPlayerAutoMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{746};

/// @brief Field _moveDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ____moveDuration;

/// @brief Field _moveCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____moveCurve;

/// @brief Field _moveOutDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ____moveOutDistance;

/// @brief Field _zCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____zCurve;

/// @brief Field _loopPlayer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerAutoMover, ____moveDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover, ____moveCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover, ____moveOutDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover, ____zCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerAutoMover, ____loopPlayer) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerAutoMover, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerAutoMover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerAutoMover*, "VROSC", "LoopPlayerAutoMover");
NEED_NO_BOX(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerAutoMover__MovePlayerFlow_d__7*, "VROSC", "LoopPlayerAutoMover/<MovePlayerFlow>d__7");
