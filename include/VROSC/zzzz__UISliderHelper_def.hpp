#pragma once
// IWYU pragma private; include "VROSC/UISliderHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__UISliderBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UISliderHelper)
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
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SimpleHaptic;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class UISliderHelper__GrabSliderRemotely_d__28;
}
namespace VROSC {
class UISliderHelper__MoveOutObject_d__27;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class UISliderHelper;
}
namespace VROSC {
class UISliderHelper__GrabSliderRemotely_d__28;
}
namespace VROSC {
class UISliderHelper__MoveOutObject_d__27;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISliderHelper);
MARK_REF_PTR_T(::VROSC::UISliderHelper__GrabSliderRemotely_d__28);
MARK_REF_PTR_T(::VROSC::UISliderHelper__MoveOutObject_d__27);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISliderHelper/<GrabSliderRemotely>d__28
class CORDL_TYPE UISliderHelper__GrabSliderRemotely_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UISliderHelper>  __4__this;

/// @brief Field <startValue>5__3, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startValue_5__3, put=__cordl_internal_set__startValue_5__3)) float_t  _startValue_5__3;

/// @brief Field <startpos>5__2, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__startpos_5__2, put=__cordl_internal_set__startpos_5__2)) ::UnityEngine::Vector3  _startpos_5__2;

/// @brief Field device, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field showVisualPopout, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_showVisualPopout, put=__cordl_internal_set_showVisualPopout)) bool  showVisualPopout;

/// @brief Field target, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::VROSC::UISlider>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x177a2ec, size 0xab0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UISliderHelper__GrabSliderRemotely_d__28* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x177ad9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x177ada4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x177addc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x177a2e8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UISliderHelper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UISliderHelper>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startValue_5__3() const;

constexpr float_t& __cordl_internal_get__startValue_5__3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startpos_5__2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startpos_5__2() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr bool const& __cordl_internal_get_showVisualPopout() const;

constexpr bool& __cordl_internal_get_showVisualPopout() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UISliderHelper>  value) ;

constexpr void __cordl_internal_set__startValue_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startpos_5__2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_showVisualPopout(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x1779f78, size 0x28, virtual false, abstract: false, final false
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
constexpr UISliderHelper__GrabSliderRemotely_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISliderHelper__GrabSliderRemotely_d__28", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISliderHelper__GrabSliderRemotely_d__28(UISliderHelper__GrabSliderRemotely_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISliderHelper__GrabSliderRemotely_d__28", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISliderHelper__GrabSliderRemotely_d__28(UISliderHelper__GrabSliderRemotely_d__28 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1286};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field showVisualPopout, offset: 0x20, size: 0x1, def value: None
 bool  ___showVisualPopout;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISliderHelper>  _____4__this;

/// @brief Field device, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field target, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ___target;

/// @brief Field <startpos>5__2, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startpos_5__2;

/// @brief Field <startValue>5__3, offset: 0x4c, size: 0x4, def value: None
 float_t  ____startValue_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, ___showVisualPopout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, ___device) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, ___target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, ____startpos_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__GrabSliderRemotely_d__28, ____startValue_5__3) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISliderHelper__GrabSliderRemotely_d__28, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISliderHelper/<MoveOutObject>d__27
class CORDL_TYPE UISliderHelper__MoveOutObject_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UISliderHelper>  __4__this;

/// @brief Field <time>5__2, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field endPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPosition, put=__cordl_internal_set_endPosition)) ::UnityEngine::Vector3  endPosition;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::VROSC::UISlider>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x177ade8, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UISliderHelper__MoveOutObject_d__27* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x177af88, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x177af90, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x177afc8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x177ade4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UISliderHelper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UISliderHelper>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPosition() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UISliderHelper>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_endPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x1779f50, size 0x28, virtual false, abstract: false, final false
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
constexpr UISliderHelper__MoveOutObject_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISliderHelper__MoveOutObject_d__27", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISliderHelper__MoveOutObject_d__27(UISliderHelper__MoveOutObject_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISliderHelper__MoveOutObject_d__27", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISliderHelper__MoveOutObject_d__27(UISliderHelper__MoveOutObject_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1287};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISliderHelper>  _____4__this;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ___target;

/// @brief Field endPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPosition;

/// @brief Field <time>5__2, offset: 0x3c, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISliderHelper__MoveOutObject_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__MoveOutObject_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__MoveOutObject_d__27, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__MoveOutObject_d__27, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__MoveOutObject_d__27, ___endPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper__MoveOutObject_d__27, ____time_5__2) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISliderHelper__MoveOutObject_d__27, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Vector2, VROSC.UISliderBase
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISliderHelper
class CORDL_TYPE UISliderHelper : public ::VROSC::UISliderBase {
public:
// Declarations
using _GrabSliderRemotely_d__28 = ::VROSC::UISliderHelper__GrabSliderRemotely_d__28;

using _MoveOutObject_d__27 = ::VROSC::UISliderHelper__MoveOutObject_d__27;

/// @brief Field _currentValue, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentValue, put=__cordl_internal_set__currentValue)) float_t  _currentValue;

/// @brief Field _directionOffset, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__directionOffset, put=__cordl_internal_set__directionOffset)) float_t  _directionOffset;

/// @brief Field _grabbingDevice, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _hapticFeedBack, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticFeedBack, put=__cordl_internal_set__hapticFeedBack)) ::VROSC::SimpleHaptic*  _hapticFeedBack;

/// @brief Field _lookAtCamera, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookAtCamera, put=__cordl_internal_set__lookAtCamera)) float_t  _lookAtCamera;

/// @brief Field _minDistance, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _moveCurve, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__moveCurve, put=__cordl_internal_set__moveCurve)) ::UnityEngine::AnimationCurve*  _moveCurve;

/// @brief Field _moveDuration, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveDuration, put=__cordl_internal_set__moveDuration)) float_t  _moveDuration;

/// @brief Field _moveTowardsFace, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get__moveTowardsFace, put=__cordl_internal_set__moveTowardsFace)) bool  _moveTowardsFace;

/// @brief Field _name, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TextMeshPro>  _name;

/// @brief Field _offsetVisually, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__offsetVisually, put=__cordl_internal_set__offsetVisually)) bool  _offsetVisually;

/// @brief Field _size, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) ::UnityEngine::Vector2  _size;

/// @brief Field _targetBone, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetBone, put=__cordl_internal_set__targetBone)) ::UnityW<::UnityEngine::Transform>  _targetBone;

/// @brief Field _targetSlider, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetSlider, put=__cordl_internal_set__targetSlider)) ::UnityW<::VROSC::UISlider>  _targetSlider;

/// @brief Field _ticks, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ticks, put=__cordl_internal_set__ticks)) int32_t  _ticks;

/// @brief Field _toggleIntegerMode, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleIntegerMode, put=__cordl_internal_set__toggleIntegerMode)) ::VROSC::TooltipData*  _toggleIntegerMode;

/// @brief Field _value, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::UnityW<::TMPro::TextMeshPro>  _value;

/// @brief Field _valueMax, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueMax, put=__cordl_internal_set__valueMax)) ::UnityW<::TMPro::TextMeshPro>  _valueMax;

/// @brief Field _valueMin, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueMin, put=__cordl_internal_set__valueMin)) ::UnityW<::TMPro::TextMeshPro>  _valueMin;

/// @brief Field _verticalOffset, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__verticalOffset, put=__cordl_internal_set__verticalOffset)) float_t  _verticalOffset;

/// @brief Field _visual, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__visual, put=__cordl_internal_set__visual)) ::UnityW<::UnityEngine::GameObject>  _visual;

/// @brief Method Awake, addr 0x1779ae4, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSize, addr 0x177a0b4, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetSize() ;

/// @brief Method Grab, addr 0x17743b8, size 0x170, virtual false, abstract: false, final false
inline void Grab(::VROSC::UISlider*  target, ::VROSC::InputDevice*  inputDevice, bool  showVisualPopout) ;

/// @brief Method GrabSliderRemotely, addr 0x1779e38, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabSliderRemotely(::VROSC::UISlider*  target, ::VROSC::InputDevice*  device, bool  showVisualPopout) ;

/// @brief Method MoveOutObject, addr 0x1779ec0, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MoveOutObject(::VROSC::UISlider*  target, ::UnityEngine::Vector3  endPosition) ;

static inline ::VROSC::UISliderHelper* New_ctor() ;

/// @brief Method OnDisable, addr 0x1779c04, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1779b04, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlaceTargetBone, addr 0x1779fa0, size 0x114, virtual false, abstract: false, final false
inline void PlaceTargetBone(::VROSC::UISlider*  target) ;

/// @brief Method SetValue, addr 0x177a0c0, size 0x19c, virtual true, abstract: false, final false
inline void SetValue(float_t  value, bool  force, bool  useCallback) ;

/// @brief Method StopGrab, addr 0x1773944, size 0x54, virtual false, abstract: false, final false
inline void StopGrab(::VROSC::InputDevice*  device) ;

/// @brief Method ToggleIntegerMode, addr 0x1779d04, size 0x134, virtual false, abstract: false, final false
inline void ToggleIntegerMode(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

constexpr float_t const& __cordl_internal_get__currentValue() const;

constexpr float_t& __cordl_internal_get__currentValue() ;

constexpr float_t const& __cordl_internal_get__directionOffset() const;

constexpr float_t& __cordl_internal_get__directionOffset() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__hapticFeedBack() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__hapticFeedBack() ;

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

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__name() ;

constexpr bool const& __cordl_internal_get__offsetVisually() const;

constexpr bool& __cordl_internal_get__offsetVisually() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__size() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__size() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetBone() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__targetSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__targetSlider() ;

constexpr int32_t const& __cordl_internal_get__ticks() const;

constexpr int32_t& __cordl_internal_get__ticks() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__toggleIntegerMode() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__toggleIntegerMode() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__value() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__value() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__valueMax() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__valueMax() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__valueMin() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__valueMin() ;

constexpr float_t const& __cordl_internal_get__verticalOffset() const;

constexpr float_t& __cordl_internal_get__verticalOffset() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visual() ;

constexpr void __cordl_internal_set__currentValue(float_t  value) ;

constexpr void __cordl_internal_set__directionOffset(float_t  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__hapticFeedBack(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__lookAtCamera(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__moveCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__moveDuration(float_t  value) ;

constexpr void __cordl_internal_set__moveTowardsFace(bool  value) ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__offsetVisually(bool  value) ;

constexpr void __cordl_internal_set__size(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__targetBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__targetSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__ticks(int32_t  value) ;

constexpr void __cordl_internal_set__toggleIntegerMode(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__value(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__valueMax(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__valueMin(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__verticalOffset(float_t  value) ;

constexpr void __cordl_internal_set__visual(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x177a25c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISliderHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISliderHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISliderHelper(UISliderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISliderHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISliderHelper(UISliderHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1288};

/// @brief Field _name, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____name;

/// @brief Field _value, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____value;

/// @brief Field _valueMin, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____valueMin;

/// @brief Field _valueMax, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____valueMax;

/// @brief Field _directionOffset, offset: 0xf8, size: 0x4, def value: None
 float_t  ____directionOffset;

/// @brief Field _verticalOffset, offset: 0xfc, size: 0x4, def value: None
 float_t  ____verticalOffset;

/// @brief Field _offsetVisually, offset: 0x100, size: 0x1, def value: None
 bool  ____offsetVisually;

/// @brief Field _moveTowardsFace, offset: 0x101, size: 0x1, def value: None
 bool  ____moveTowardsFace;

/// @brief Field _lookAtCamera, offset: 0x104, size: 0x4, def value: None
 float_t  ____lookAtCamera;

/// @brief Field _minDistance, offset: 0x108, size: 0x4, def value: None
 float_t  ____minDistance;

/// @brief Field _visual, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visual;

/// @brief Field _targetBone, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetBone;

/// @brief Field _moveDuration, offset: 0x120, size: 0x4, def value: None
 float_t  ____moveDuration;

/// @brief Field _moveCurve, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____moveCurve;

/// @brief Field _hapticFeedBack, offset: 0x130, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____hapticFeedBack;

/// @brief Field _size, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____size;

/// @brief Field _grabbingDevice, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

/// @brief Field _currentValue, offset: 0x148, size: 0x4, def value: None
 float_t  ____currentValue;

/// @brief Field _ticks, offset: 0x14c, size: 0x4, def value: None
 int32_t  ____ticks;

/// @brief Field _targetSlider, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____targetSlider;

/// @brief Field _toggleIntegerMode, offset: 0x158, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____toggleIntegerMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISliderHelper, ____name) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____value) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____valueMin) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____valueMax) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____directionOffset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____verticalOffset) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____offsetVisually) == 0x100, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____moveTowardsFace) == 0x101, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____lookAtCamera) == 0x104, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____minDistance) == 0x108, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____visual) == 0x110, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____targetBone) == 0x118, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____moveDuration) == 0x120, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____moveCurve) == 0x128, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____hapticFeedBack) == 0x130, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____size) == 0x138, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____grabbingDevice) == 0x140, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____currentValue) == 0x148, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____ticks) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____targetSlider) == 0x150, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderHelper, ____toggleIntegerMode) == 0x158, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISliderHelper, 0x160>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISliderHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderHelper*, "VROSC", "UISliderHelper");
NEED_NO_BOX(::VROSC::UISliderHelper__GrabSliderRemotely_d__28);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderHelper__GrabSliderRemotely_d__28*, "VROSC", "UISliderHelper/<GrabSliderRemotely>d__28");
NEED_NO_BOX(::VROSC::UISliderHelper__MoveOutObject_d__27);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderHelper__MoveOutObject_d__27*, "VROSC", "UISliderHelper/<MoveOutObject>d__27");
