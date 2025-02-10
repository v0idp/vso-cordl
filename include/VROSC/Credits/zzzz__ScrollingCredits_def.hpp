#pragma once
// IWYU pragma private; include "VROSC/Credits/ScrollingCredits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollingCredits)
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
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC::Credits {
class CreditsData;
}
namespace VROSC::Credits {
class CreditsObject;
}
namespace VROSC::Credits {
class CreditsSection;
}
namespace VROSC::Credits {
class ScrollingCredits__GrabbingCoroutine_d__22;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class Clickable;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SmoothMovement;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC::Credits {
class ScrollingCredits;
}
namespace VROSC::Credits {
class ScrollingCredits__GrabbingCoroutine_d__22;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::ScrollingCredits);
MARK_REF_PTR_T(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.ScrollingCredits/<GrabbingCoroutine>d__22
class CORDL_TYPE ScrollingCredits__GrabbingCoroutine_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::Credits::ScrollingCredits>  __4__this;

/// @brief Field <startpos>5__2, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__startpos_5__2, put=__cordl_internal_set__startpos_5__2)) ::UnityEngine::Vector3  _startpos_5__2;

/// @brief Field device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17de50c, size 0x1ac, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17de6b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17de6c0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17de6f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17de508, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::Credits::ScrollingCredits> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::Credits::ScrollingCredits>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startpos_5__2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startpos_5__2() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::Credits::ScrollingCredits>  value) ;

constexpr void __cordl_internal_set__startpos_5__2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

/// @brief Method .ctor, addr 0x17ddedc, size 0x28, virtual false, abstract: false, final false
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
constexpr ScrollingCredits__GrabbingCoroutine_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollingCredits__GrabbingCoroutine_d__22", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollingCredits__GrabbingCoroutine_d__22(ScrollingCredits__GrabbingCoroutine_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollingCredits__GrabbingCoroutine_d__22", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollingCredits__GrabbingCoroutine_d__22(ScrollingCredits__GrabbingCoroutine_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1587};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::ScrollingCredits>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field <startpos>5__2, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startpos_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22, ____startpos_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22, 0x40>, "Size mismatch!");

} // namespace end def VROSC::Credits
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.ScrollingCredits
class CORDL_TYPE ScrollingCredits : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GrabbingCoroutine_d__22 = ::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22;

/// @brief Field _background, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__background, put=__cordl_internal_set__background)) ::UnityW<::UnityEngine::RectTransform>  _background;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::Credits::CreditsData>  _data;

/// @brief Field _dragObject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dragObject, put=__cordl_internal_set__dragObject)) ::UnityW<::VROSC::Clickable>  _dragObject;

/// @brief Field _dragging, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__dragging, put=__cordl_internal_set__dragging)) ::VROSC::SmoothMovement*  _dragging;

/// @brief Field _grabbed, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__grabbed, put=__cordl_internal_set__grabbed)) bool  _grabbed;

/// @brief Field _grabbingDevice, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _maxHeight, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxHeight, put=__cordl_internal_set__maxHeight)) float_t  _maxHeight;

/// @brief Field _moveTimer, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveTimer, put=__cordl_internal_set__moveTimer)) float_t  _moveTimer;

/// @brief Field _mover, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::UnityEngine::Transform>  _mover;

/// @brief Field _objects, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__objects, put=__cordl_internal_set__objects)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*  _objects;

/// @brief Field _postCreditsObject, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__postCreditsObject, put=__cordl_internal_set__postCreditsObject)) ::UnityW<::VROSC::Credits::CreditsObject>  _postCreditsObject;

/// @brief Field _scrollAmount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__scrollAmount, put=__cordl_internal_set__scrollAmount)) float_t  _scrollAmount;

/// @brief Field _sectionPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sectionPrefab, put=__cordl_internal_set__sectionPrefab)) ::UnityW<::VROSC::Credits::CreditsSection>  _sectionPrefab;

/// @brief Field _setupComplete, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupComplete, put=__cordl_internal_set__setupComplete)) bool  _setupComplete;

/// @brief Field _startFade, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__startFade, put=__cordl_internal_set__startFade)) float_t  _startFade;

/// @brief Method Awake, addr 0x17dd424, size 0x158, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GrabbingCoroutine, addr 0x17dde70, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabbingCoroutine(::VROSC::InputDevice*  device) ;

static inline ::VROSC::Credits::ScrollingCredits* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17dd57c, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17ddbe8, size 0x10c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17de3b0, size 0xdc, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x17dd654, size 0x110, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPressed, addr 0x17ddd98, size 0xd8, virtual false, abstract: false, final false
inline void OnPressed(::VROSC::ClickData*  clickData, bool  pressed) ;

/// @brief Method Reset, addr 0x17ddb44, size 0xa4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x17dd764, size 0x3e0, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StopGrab, addr 0x17ddcf4, size 0xa4, virtual false, abstract: false, final false
inline void StopGrab(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method Update, addr 0x17ddf04, size 0x164, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePostCreditsObject, addr 0x17de2f8, size 0xb8, virtual false, abstract: false, final false
inline void UpdatePostCreditsObject() ;

/// @brief Method UpdateVisibility, addr 0x17de068, size 0x290, virtual false, abstract: false, final false
inline void UpdateVisibility() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__background() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__background() ;

constexpr ::UnityW<::VROSC::Credits::CreditsData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::Credits::CreditsData>& __cordl_internal_get__data() ;

constexpr ::UnityW<::VROSC::Clickable> const& __cordl_internal_get__dragObject() const;

constexpr ::UnityW<::VROSC::Clickable>& __cordl_internal_get__dragObject() ;

constexpr ::VROSC::SmoothMovement* const& __cordl_internal_get__dragging() const;

constexpr ::VROSC::SmoothMovement*& __cordl_internal_get__dragging() ;

constexpr bool const& __cordl_internal_get__grabbed() const;

constexpr bool& __cordl_internal_get__grabbed() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr float_t const& __cordl_internal_get__maxHeight() const;

constexpr float_t& __cordl_internal_get__maxHeight() ;

constexpr float_t const& __cordl_internal_get__moveTimer() const;

constexpr float_t& __cordl_internal_get__moveTimer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__mover() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>* const& __cordl_internal_get__objects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*& __cordl_internal_get__objects() ;

constexpr ::UnityW<::VROSC::Credits::CreditsObject> const& __cordl_internal_get__postCreditsObject() const;

constexpr ::UnityW<::VROSC::Credits::CreditsObject>& __cordl_internal_get__postCreditsObject() ;

constexpr float_t const& __cordl_internal_get__scrollAmount() const;

constexpr float_t& __cordl_internal_get__scrollAmount() ;

constexpr ::UnityW<::VROSC::Credits::CreditsSection> const& __cordl_internal_get__sectionPrefab() const;

constexpr ::UnityW<::VROSC::Credits::CreditsSection>& __cordl_internal_get__sectionPrefab() ;

constexpr bool const& __cordl_internal_get__setupComplete() const;

constexpr bool& __cordl_internal_get__setupComplete() ;

constexpr float_t const& __cordl_internal_get__startFade() const;

constexpr float_t& __cordl_internal_get__startFade() ;

constexpr void __cordl_internal_set__background(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::Credits::CreditsData>  value) ;

constexpr void __cordl_internal_set__dragObject(::UnityW<::VROSC::Clickable>  value) ;

constexpr void __cordl_internal_set__dragging(::VROSC::SmoothMovement*  value) ;

constexpr void __cordl_internal_set__grabbed(bool  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__maxHeight(float_t  value) ;

constexpr void __cordl_internal_set__moveTimer(float_t  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__objects(::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*  value) ;

constexpr void __cordl_internal_set__postCreditsObject(::UnityW<::VROSC::Credits::CreditsObject>  value) ;

constexpr void __cordl_internal_set__scrollAmount(float_t  value) ;

constexpr void __cordl_internal_set__sectionPrefab(::UnityW<::VROSC::Credits::CreditsSection>  value) ;

constexpr void __cordl_internal_set__setupComplete(bool  value) ;

constexpr void __cordl_internal_set__startFade(float_t  value) ;

/// @brief Method .ctor, addr 0x17de48c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrollingCredits() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollingCredits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollingCredits(ScrollingCredits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollingCredits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollingCredits(ScrollingCredits const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1588};

/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsData>  ____data;

/// @brief Field _sectionPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsSection>  ____sectionPrefab;

/// @brief Field _background, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____background;

/// @brief Field _mover, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____mover;

/// @brief Field _dragObject, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Clickable>  ____dragObject;

/// @brief Field _startFade, offset: 0x48, size: 0x4, def value: None
 float_t  ____startFade;

/// @brief Field _dragging, offset: 0x50, size: 0x8, def value: None
 ::VROSC::SmoothMovement*  ____dragging;

/// @brief Field _maxHeight, offset: 0x58, size: 0x4, def value: None
 float_t  ____maxHeight;

/// @brief Field _scrollAmount, offset: 0x5c, size: 0x4, def value: None
 float_t  ____scrollAmount;

/// @brief Field _moveTimer, offset: 0x60, size: 0x4, def value: None
 float_t  ____moveTimer;

/// @brief Field _setupComplete, offset: 0x64, size: 0x1, def value: None
 bool  ____setupComplete;

/// @brief Field _grabbed, offset: 0x65, size: 0x1, def value: None
 bool  ____grabbed;

/// @brief Field _grabbingDevice, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

/// @brief Field _postCreditsObject, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsObject>  ____postCreditsObject;

/// @brief Field _objects, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*  ____objects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____sectionPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____background) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____mover) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____dragObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____startFade) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____dragging) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____maxHeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____scrollAmount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____moveTimer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____setupComplete) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____grabbed) == 0x65, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____grabbingDevice) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____postCreditsObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::ScrollingCredits, ____objects) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::ScrollingCredits, 0x80>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::ScrollingCredits);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::ScrollingCredits*, "VROSC.Credits", "ScrollingCredits");
NEED_NO_BOX(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::ScrollingCredits__GrabbingCoroutine_d__22*, "VROSC.Credits", "ScrollingCredits/<GrabbingCoroutine>d__22");
