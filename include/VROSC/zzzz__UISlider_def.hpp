#pragma once
// IWYU pragma private; include "VROSC/UISlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__UISliderBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UISlider)
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
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class UISliderData;
}
namespace VROSC {
class UISliderKnob;
}
namespace VROSC {
class UISlider__GrabSliderRemotely_d__17;
}
namespace VROSC {
class UISlider__GrabSlider_d__19;
}
// Forward declare root types
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UISlider__GrabSliderRemotely_d__17;
}
namespace VROSC {
class UISlider__GrabSlider_d__19;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISlider);
MARK_REF_PTR_T(::VROSC::UISlider__GrabSliderRemotely_d__17);
MARK_REF_PTR_T(::VROSC::UISlider__GrabSlider_d__19);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISlider/<GrabSlider>d__19
class CORDL_TYPE UISlider__GrabSlider_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UISlider>  __4__this;

/// @brief Field <point>5__2, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__point_5__2, put=__cordl_internal_set__point_5__2)) ::UnityEngine::Vector3  _point_5__2;

/// @brief Field device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field grabbingButton, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbingButton, put=__cordl_internal_set_grabbingButton)) ::VROSC::TriggerButton  grabbingButton;

/// @brief Field pointing, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_pointing, put=__cordl_internal_set_pointing)) bool  pointing;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1773e7c, size 0x3ac, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UISlider__GrabSlider_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1774228, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1774230, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1774268, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1773e78, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__point_5__2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__point_5__2() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_grabbingButton() ;

constexpr bool const& __cordl_internal_get_pointing() const;

constexpr bool& __cordl_internal_get_pointing() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__point_5__2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set_pointing(bool  value) ;

/// @brief Method .ctor, addr 0x1773998, size 0x28, virtual false, abstract: false, final false
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
constexpr UISlider__GrabSlider_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISlider__GrabSlider_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISlider__GrabSlider_d__19(UISlider__GrabSlider_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISlider__GrabSlider_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISlider__GrabSlider_d__19(UISlider__GrabSlider_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1259};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field grabbingButton, offset: 0x30, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___grabbingButton;

/// @brief Field pointing, offset: 0x34, size: 0x1, def value: None
 bool  ___pointing;

/// @brief Field <point>5__2, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____point_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISlider__GrabSlider_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSlider_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSlider_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSlider_d__19, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSlider_d__19, ___grabbingButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSlider_d__19, ___pointing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSlider_d__19, ____point_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISlider__GrabSlider_d__19, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISlider/<GrabSliderRemotely>d__17
class CORDL_TYPE UISlider__GrabSliderRemotely_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UISlider>  __4__this;

/// @brief Field device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field grabbingButton, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbingButton, put=__cordl_internal_set_grabbingButton)) ::VROSC::TriggerButton  grabbingButton;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1774274, size 0x144, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UISlider__GrabSliderRemotely_d__17* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1774528, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1774530, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1774568, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1774270, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_grabbingButton() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value) ;

/// @brief Method .ctor, addr 0x177391c, size 0x28, virtual false, abstract: false, final false
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
constexpr UISlider__GrabSliderRemotely_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISlider__GrabSliderRemotely_d__17", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISlider__GrabSliderRemotely_d__17(UISlider__GrabSliderRemotely_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISlider__GrabSliderRemotely_d__17", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISlider__GrabSliderRemotely_d__17(UISlider__GrabSliderRemotely_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1260};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field grabbingButton, offset: 0x30, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___grabbingButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISlider__GrabSliderRemotely_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSliderRemotely_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSliderRemotely_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSliderRemotely_d__17, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider__GrabSliderRemotely_d__17, ___grabbingButton) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISlider__GrabSliderRemotely_d__17, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.TriggerButton, VROSC.UISliderBase
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISlider
class CORDL_TYPE UISlider : public ::VROSC::UISliderBase {
public:
// Declarations
using _GrabSliderRemotely_d__17 = ::VROSC::UISlider__GrabSliderRemotely_d__17;

using _GrabSlider_d__19 = ::VROSC::UISlider__GrabSlider_d__19;

 __declspec(property(get=get_Data)) ::VROSC::UISliderData*  Data;

/// @brief Field _data, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::VROSC::UISliderData*  _data;

/// @brief Field _grabbingButton, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabbingButton, put=__cordl_internal_set__grabbingButton)) ::VROSC::TriggerButton  _grabbingButton;

/// @brief Field _grabbingDevice, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _onlyShowKnobOnHover, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get__onlyShowKnobOnHover, put=__cordl_internal_set__onlyShowKnobOnHover)) bool  _onlyShowKnobOnHover;

/// @brief Field _rectTransform, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _remoteSliderActive, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get__remoteSliderActive, put=__cordl_internal_set__remoteSliderActive)) bool  _remoteSliderActive;

/// @brief Field _showVisualPopout, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get__showVisualPopout, put=__cordl_internal_set__showVisualPopout)) bool  _showVisualPopout;

/// @brief Field _sliderKnob, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sliderKnob, put=__cordl_internal_set__sliderKnob)) ::UnityW<::VROSC::UISliderKnob>  _sliderKnob;

/// @brief Method Awake, addr 0x1772f14, size 0x168, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonWasPressed, addr 0x1773700, size 0x120, virtual false, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

/// @brief Method GetNormalizedValue, addr 0x1773e04, size 0x50, virtual false, abstract: false, final false
inline float_t GetNormalizedValue(float_t  valueInRange) ;

/// @brief Method GetRectTransform, addr 0x1773b64, size 0x8c, virtual false, abstract: false, final false
inline void GetRectTransform() ;

/// @brief Method GetSize, addr 0x1773a88, size 0xdc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetSize() ;

/// @brief Method GetValueByPosition, addr 0x17739c0, size 0xb8, virtual false, abstract: false, final false
inline float_t GetValueByPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetValueInRange, addr 0x1773dc0, size 0x44, virtual false, abstract: false, final false
inline float_t GetValueInRange(float_t  normalizedValue) ;

/// @brief Method GrabSlider, addr 0x1773894, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabSlider(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton, bool  pointing) ;

/// @brief Method GrabSliderRemotely, addr 0x1773820, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabSliderRemotely(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton) ;

/// @brief Method HoverChanged, addr 0x17731ec, size 0x40, virtual false, abstract: false, final false
inline void HoverChanged(bool  hovering) ;

static inline ::VROSC::UISlider* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1773080, size 0x168, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17734b8, size 0x120, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x177322c, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetValue, addr 0x1773c30, size 0xac, virtual true, abstract: false, final false
inline void SetValue(float_t  value, bool  force, bool  useCallback) ;

/// @brief Method StopGrabRemotely, addr 0x17736a8, size 0x58, virtual false, abstract: false, final false
inline void StopGrabRemotely(::VROSC::InputDevice*  device) ;

/// @brief Method StopGrabSlider, addr 0x1773408, size 0xb0, virtual false, abstract: false, final false
inline void StopGrabSlider(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

constexpr ::VROSC::UISliderData* const& __cordl_internal_get__data() const;

constexpr ::VROSC::UISliderData*& __cordl_internal_get__data() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__grabbingButton() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr bool const& __cordl_internal_get__onlyShowKnobOnHover() const;

constexpr bool& __cordl_internal_get__onlyShowKnobOnHover() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr bool const& __cordl_internal_get__remoteSliderActive() const;

constexpr bool& __cordl_internal_get__remoteSliderActive() ;

constexpr bool const& __cordl_internal_get__showVisualPopout() const;

constexpr bool& __cordl_internal_get__showVisualPopout() ;

constexpr ::UnityW<::VROSC::UISliderKnob> const& __cordl_internal_get__sliderKnob() const;

constexpr ::UnityW<::VROSC::UISliderKnob>& __cordl_internal_get__sliderKnob() ;

constexpr void __cordl_internal_set__data(::VROSC::UISliderData*  value) ;

constexpr void __cordl_internal_set__grabbingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__onlyShowKnobOnHover(bool  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__remoteSliderActive(bool  value) ;

constexpr void __cordl_internal_set__showVisualPopout(bool  value) ;

constexpr void __cordl_internal_set__sliderKnob(::UnityW<::VROSC::UISliderKnob>  value) ;

/// @brief Method .ctor, addr 0x1773e54, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x1772f0c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UISliderData* get_Data() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISlider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISlider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISlider(UISlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISlider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISlider(UISlider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1261};

/// @brief Field _data, offset: 0xd8, size: 0x8, def value: None
 ::VROSC::UISliderData*  ____data;

/// @brief Field _sliderKnob, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::VROSC::UISliderKnob>  ____sliderKnob;

/// @brief Field _onlyShowKnobOnHover, offset: 0xe8, size: 0x1, def value: None
 bool  ____onlyShowKnobOnHover;

/// @brief Field _showVisualPopout, offset: 0xe9, size: 0x1, def value: None
 bool  ____showVisualPopout;

/// @brief Field _grabbingDevice, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

/// @brief Field _grabbingButton, offset: 0xf8, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____grabbingButton;

/// @brief Field _remoteSliderActive, offset: 0xfc, size: 0x1, def value: None
 bool  ____remoteSliderActive;

/// @brief Field _rectTransform, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISlider, ____data) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider, ____sliderKnob) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider, ____onlyShowKnobOnHover) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider, ____showVisualPopout) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider, ____grabbingDevice) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider, ____grabbingButton) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider, ____remoteSliderActive) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlider, ____rectTransform) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISlider, 0x108>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISlider);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISlider*, "VROSC", "UISlider");
NEED_NO_BOX(::VROSC::UISlider__GrabSliderRemotely_d__17);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISlider__GrabSliderRemotely_d__17*, "VROSC", "UISlider/<GrabSliderRemotely>d__17");
NEED_NO_BOX(::VROSC::UISlider__GrabSlider_d__19);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISlider__GrabSlider_d__19*, "VROSC", "UISlider/<GrabSlider>d__19");
