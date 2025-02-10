#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupMover.hpp"
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
CORDL_MODULE_EXPORT(LoopStationGroupMover)
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
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class LoopStationGroupMover__MoveGroupFlow_d__10;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
class LoopStationGroupMover;
}
namespace VROSC {
class LoopStationGroupMover__MoveGroupFlow_d__10;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationGroupMover);
MARK_REF_PTR_T(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroupMover/<MoveGroupFlow>d__10
class CORDL_TYPE LoopStationGroupMover__MoveGroupFlow_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStationGroupMover>  __4__this;

/// @brief Field <duration>5__6, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration_5__6, put=__cordl_internal_set__duration_5__6)) float_t  _duration_5__6;

/// @brief Field <localEndPosition>5__5, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get__localEndPosition_5__5, put=__cordl_internal_set__localEndPosition_5__5)) ::UnityEngine::Vector3  _localEndPosition_5__5;

/// @brief Field <localStartPosition>5__4, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__localStartPosition_5__4, put=__cordl_internal_set__localStartPosition_5__4)) ::UnityEngine::Vector3  _localStartPosition_5__4;

/// @brief Field <parent>5__3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent_5__3, put=__cordl_internal_set__parent_5__3)) ::UnityW<::UnityEngine::Transform>  _parent_5__3;

/// @brief Field <time>5__2, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field from, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_from, put=__cordl_internal_set_from)) ::UnityEngine::Vector3  from;

/// @brief Field to, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityEngine::Vector3  to;

/// @brief Field zmultiplier, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_zmultiplier, put=__cordl_internal_set_zmultiplier)) float_t  zmultiplier;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18b3b60, size 0x374, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18b3ed4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18b3edc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18b3f14, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18b3b5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::LoopStationGroupMover> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStationGroupMover>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__duration_5__6() const;

constexpr float_t& __cordl_internal_get__duration_5__6() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localEndPosition_5__5() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localEndPosition_5__5() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localStartPosition_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localStartPosition_5__4() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parent_5__3() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parent_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_from() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_from() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_to() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_to() ;

constexpr float_t const& __cordl_internal_get_zmultiplier() const;

constexpr float_t& __cordl_internal_get_zmultiplier() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationGroupMover>  value) ;

constexpr void __cordl_internal_set__duration_5__6(float_t  value) ;

constexpr void __cordl_internal_set__localEndPosition_5__5(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localStartPosition_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__parent_5__3(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_from(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_to(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_zmultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x18b3b2c, size 0x28, virtual false, abstract: false, final false
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
constexpr LoopStationGroupMover__MoveGroupFlow_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupMover__MoveGroupFlow_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroupMover__MoveGroupFlow_d__10(LoopStationGroupMover__MoveGroupFlow_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupMover__MoveGroupFlow_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroupMover__MoveGroupFlow_d__10(LoopStationGroupMover__MoveGroupFlow_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{719};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupMover>  _____4__this;

/// @brief Field from, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___from;

/// @brief Field to, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___to;

/// @brief Field zmultiplier, offset: 0x40, size: 0x4, def value: None
 float_t  ___zmultiplier;

/// @brief Field <time>5__2, offset: 0x44, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <parent>5__3, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____parent_5__3;

/// @brief Field <localStartPosition>5__4, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localStartPosition_5__4;

/// @brief Field <localEndPosition>5__5, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localEndPosition_5__5;

/// @brief Field <duration>5__6, offset: 0x68, size: 0x4, def value: None
 float_t  ____duration_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ___from) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ___to) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ___zmultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ____time_5__2) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ____parent_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ____localStartPosition_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ____localEndPosition_5__5) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, ____duration_5__6) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10, 0x70>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroupMover
class CORDL_TYPE LoopStationGroupMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MoveGroupFlow_d__10 = ::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10;

/// @brief Field _group, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__group, put=__cordl_internal_set__group)) ::UnityW<::VROSC::LoopStationGroup>  _group;

/// @brief Field _loopStation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _moveCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__moveCurve, put=__cordl_internal_set__moveCurve)) ::UnityEngine::AnimationCurve*  _moveCurve;

/// @brief Field _moveDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveDuration, put=__cordl_internal_set__moveDuration)) float_t  _moveDuration;

/// @brief Field _moveOutDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveOutDistance, put=__cordl_internal_set__moveOutDistance)) float_t  _moveOutDistance;

/// @brief Field _shortMoveDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__shortMoveDistance, put=__cordl_internal_set__shortMoveDistance)) float_t  _shortMoveDistance;

/// @brief Field _shortMoveDuration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__shortMoveDuration, put=__cordl_internal_set__shortMoveDuration)) float_t  _shortMoveDuration;

/// @brief Field _zCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__zCurve, put=__cordl_internal_set__zCurve)) ::UnityEngine::AnimationCurve*  _zCurve;

/// @brief Method MoveComplete, addr 0x18b3abc, size 0x70, virtual false, abstract: false, final false
inline void MoveComplete(::UnityEngine::Vector3  position) ;

/// @brief Method MoveGroup, addr 0x18b05c8, size 0xdc, virtual false, abstract: false, final false
inline void MoveGroup(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  zmultiplier) ;

/// @brief Method MoveGroupFlow, addr 0x18b3a10, size 0xac, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MoveGroupFlow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  zmultiplier) ;

static inline ::VROSC::LoopStationGroupMover* New_ctor() ;

/// @brief Method Setup, addr 0x18b3874, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStationGroup*  group, ::VROSC::LoopStation*  loopStation) ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__group() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__group() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__moveCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__moveCurve() ;

constexpr float_t const& __cordl_internal_get__moveDuration() const;

constexpr float_t& __cordl_internal_get__moveDuration() ;

constexpr float_t const& __cordl_internal_get__moveOutDistance() const;

constexpr float_t& __cordl_internal_get__moveOutDistance() ;

constexpr float_t const& __cordl_internal_get__shortMoveDistance() const;

constexpr float_t& __cordl_internal_get__shortMoveDistance() ;

constexpr float_t const& __cordl_internal_get__shortMoveDuration() const;

constexpr float_t& __cordl_internal_get__shortMoveDuration() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__zCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__zCurve() ;

constexpr void __cordl_internal_set__group(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__moveCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__moveDuration(float_t  value) ;

constexpr void __cordl_internal_set__moveOutDistance(float_t  value) ;

constexpr void __cordl_internal_set__shortMoveDistance(float_t  value) ;

constexpr void __cordl_internal_set__shortMoveDuration(float_t  value) ;

constexpr void __cordl_internal_set__zCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x18b3b54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroupMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroupMover(LoopStationGroupMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroupMover(LoopStationGroupMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{720};

/// @brief Field _moveDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ____moveDuration;

/// @brief Field _moveCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____moveCurve;

/// @brief Field _shortMoveDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ____shortMoveDistance;

/// @brief Field _shortMoveDuration, offset: 0x34, size: 0x4, def value: None
 float_t  ____shortMoveDuration;

/// @brief Field _moveOutDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ____moveOutDistance;

/// @brief Field _zCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____zCurve;

/// @brief Field _loopStation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _group, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroupMover, ____moveDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover, ____moveCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover, ____shortMoveDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover, ____shortMoveDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover, ____moveOutDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover, ____zCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover, ____loopStation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMover, ____group) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroupMover, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationGroupMover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupMover*, "VROSC", "LoopStationGroupMover");
NEED_NO_BOX(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupMover__MoveGroupFlow_d__10*, "VROSC", "LoopStationGroupMover/<MoveGroupFlow>d__10");
