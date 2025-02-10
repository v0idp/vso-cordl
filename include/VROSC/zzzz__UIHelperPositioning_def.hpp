#pragma once
// IWYU pragma private; include "VROSC/UIHelperPositioning.hpp"
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
CORDL_MODULE_EXPORT(UIHelperPositioning)
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
class UIHelperPositioning__MoveOutObject_d__11;
}
// Forward declare root types
namespace VROSC {
class UIHelperPositioning;
}
namespace VROSC {
class UIHelperPositioning__MoveOutObject_d__11;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIHelperPositioning);
MARK_REF_PTR_T(::VROSC::UIHelperPositioning__MoveOutObject_d__11);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIHelperPositioning/<MoveOutObject>d__11
class CORDL_TYPE UIHelperPositioning__MoveOutObject_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIHelperPositioning>  __4__this;

/// @brief Field <endScale>5__3, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__endScale_5__3, put=__cordl_internal_set__endScale_5__3)) ::UnityEngine::Vector3  _endScale_5__3;

/// @brief Field <time>5__2, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field endPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPosition, put=__cordl_internal_set_endPosition)) ::UnityEngine::Vector3  endPosition;

/// @brief Field size, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1779184, size 0x26c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIHelperPositioning__MoveOutObject_d__11* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17793f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17793f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1779430, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1779180, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIHelperPositioning> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIHelperPositioning>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endScale_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__endScale_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIHelperPositioning>  value) ;

constexpr void __cordl_internal_set__endScale_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_endPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1779150, size 0x28, virtual false, abstract: false, final false
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
constexpr UIHelperPositioning__MoveOutObject_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHelperPositioning__MoveOutObject_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHelperPositioning__MoveOutObject_d__11(UIHelperPositioning__MoveOutObject_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHelperPositioning__MoveOutObject_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHelperPositioning__MoveOutObject_d__11(UIHelperPositioning__MoveOutObject_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1281};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelperPositioning>  _____4__this;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field size, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

/// @brief Field endPosition, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPosition;

/// @brief Field <time>5__2, offset: 0x48, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <endScale>5__3, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____endScale_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, ___size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, ___endPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, ____time_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning__MoveOutObject_d__11, ____endScale_5__3) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIHelperPositioning__MoveOutObject_d__11, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIHelperPositioning
class CORDL_TYPE UIHelperPositioning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MoveOutObject_d__11 = ::VROSC::UIHelperPositioning__MoveOutObject_d__11;

/// @brief Field _animateScale, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__animateScale, put=__cordl_internal_set__animateScale)) bool  _animateScale;

/// @brief Field _directionOffset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__directionOffset, put=__cordl_internal_set__directionOffset)) float_t  _directionOffset;

/// @brief Field _lookAtCamera, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookAtCamera, put=__cordl_internal_set__lookAtCamera)) float_t  _lookAtCamera;

/// @brief Field _minDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _moveCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__moveCurve, put=__cordl_internal_set__moveCurve)) ::UnityEngine::AnimationCurve*  _moveCurve;

/// @brief Field _moveDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveDuration, put=__cordl_internal_set__moveDuration)) float_t  _moveDuration;

/// @brief Field _moveTowardsFace, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__moveTowardsFace, put=__cordl_internal_set__moveTowardsFace)) bool  _moveTowardsFace;

/// @brief Field _onlyRotateY, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__onlyRotateY, put=__cordl_internal_set__onlyRotateY)) bool  _onlyRotateY;

/// @brief Field _scaleCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleCurve, put=__cordl_internal_set__scaleCurve)) ::UnityEngine::AnimationCurve*  _scaleCurve;

/// @brief Field _targetBone, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetBone, put=__cordl_internal_set__targetBone)) ::UnityW<::UnityEngine::Transform>  _targetBone;

/// @brief Field _verticalOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__verticalOffset, put=__cordl_internal_set__verticalOffset)) float_t  _verticalOffset;

/// @brief Method MoveOutObject, addr 0x1778e10, size 0xa8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MoveOutObject(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  endPosition, ::UnityEngine::Vector3  size) ;

static inline ::VROSC::UIHelperPositioning* New_ctor() ;

/// @brief Method PlaceAtEndPosition, addr 0x1778810, size 0x5fc, virtual false, abstract: false, final false
inline void PlaceAtEndPosition(::UnityEngine::Vector3  startPosition, ::UnityEngine::Transform*  targetTransform) ;

/// @brief Method PlaceTargetBone, addr 0x1778eb8, size 0xf0, virtual false, abstract: false, final false
inline void PlaceTargetBone(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  size) ;

constexpr bool const& __cordl_internal_get__animateScale() const;

constexpr bool& __cordl_internal_get__animateScale() ;

constexpr float_t const& __cordl_internal_get__directionOffset() const;

constexpr float_t& __cordl_internal_get__directionOffset() ;

constexpr float_t const& __cordl_internal_get__lookAtCamera() const;

constexpr float_t& __cordl_internal_get__lookAtCamera() ;

constexpr float_t const& __cordl_internal_get__minDistance() const;

constexpr float_t& __cordl_internal_get__minDistance() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__moveCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__moveCurve() ;

constexpr float_t const& __cordl_internal_get__moveDuration() const;

constexpr float_t& __cordl_internal_get__moveDuration() ;

constexpr bool const& __cordl_internal_get__moveTowardsFace() const;

constexpr bool& __cordl_internal_get__moveTowardsFace() ;

constexpr bool const& __cordl_internal_get__onlyRotateY() const;

constexpr bool& __cordl_internal_get__onlyRotateY() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetBone() ;

constexpr float_t const& __cordl_internal_get__verticalOffset() const;

constexpr float_t& __cordl_internal_get__verticalOffset() ;

constexpr void __cordl_internal_set__animateScale(bool  value) ;

constexpr void __cordl_internal_set__directionOffset(float_t  value) ;

constexpr void __cordl_internal_set__lookAtCamera(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__moveCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__moveDuration(float_t  value) ;

constexpr void __cordl_internal_set__moveTowardsFace(bool  value) ;

constexpr void __cordl_internal_set__onlyRotateY(bool  value) ;

constexpr void __cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__targetBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__verticalOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x1779178, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIHelperPositioning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHelperPositioning", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHelperPositioning(UIHelperPositioning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHelperPositioning", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHelperPositioning(UIHelperPositioning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1282};

/// @brief Field _directionOffset, offset: 0x20, size: 0x4, def value: None
 float_t  ____directionOffset;

/// @brief Field _verticalOffset, offset: 0x24, size: 0x4, def value: None
 float_t  ____verticalOffset;

/// @brief Field _moveTowardsFace, offset: 0x28, size: 0x1, def value: None
 bool  ____moveTowardsFace;

/// @brief Field _onlyRotateY, offset: 0x29, size: 0x1, def value: None
 bool  ____onlyRotateY;

/// @brief Field _minDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ____minDistance;

/// @brief Field _lookAtCamera, offset: 0x30, size: 0x4, def value: None
 float_t  ____lookAtCamera;

/// @brief Field _targetBone, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetBone;

/// @brief Field _moveDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ____moveDuration;

/// @brief Field _moveCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____moveCurve;

/// @brief Field _animateScale, offset: 0x50, size: 0x1, def value: None
 bool  ____animateScale;

/// @brief Field _scaleCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____scaleCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIHelperPositioning, ____directionOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____verticalOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____moveTowardsFace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____onlyRotateY) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____minDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____lookAtCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____targetBone) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____moveDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____moveCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____animateScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperPositioning, ____scaleCurve) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIHelperPositioning, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIHelperPositioning);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHelperPositioning*, "VROSC", "UIHelperPositioning");
NEED_NO_BOX(::VROSC::UIHelperPositioning__MoveOutObject_d__11);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHelperPositioning__MoveOutObject_d__11*, "VROSC", "UIHelperPositioning/<MoveOutObject>d__11");
