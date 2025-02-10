#pragma once
// IWYU pragma private; include "VROSC/UISpinner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__UIInteractable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UISpinner)
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
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MinMaxInt;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISpinnerData;
}
namespace VROSC {
class UISpinner__GrabSpinnerRemotely_d__33;
}
// Forward declare root types
namespace VROSC {
class UISpinner;
}
namespace VROSC {
class UISpinner__GrabSpinnerRemotely_d__33;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISpinner);
MARK_REF_PTR_T(::VROSC::UISpinner__GrabSpinnerRemotely_d__33);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISpinner/<GrabSpinnerRemotely>d__33
class CORDL_TYPE UISpinner__GrabSpinnerRemotely_d__33 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UISpinner>  __4__this;

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

/// @brief Method MoveNext, addr 0x1776360, size 0x130, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UISpinner__GrabSpinnerRemotely_d__33* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17764f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1776500, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1776538, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x177635c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_grabbingButton() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value) ;

/// @brief Method .ctor, addr 0x1775f74, size 0x28, virtual false, abstract: false, final false
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
constexpr UISpinner__GrabSpinnerRemotely_d__33() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISpinner__GrabSpinnerRemotely_d__33", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISpinner__GrabSpinnerRemotely_d__33(UISpinner__GrabSpinnerRemotely_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISpinner__GrabSpinnerRemotely_d__33", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISpinner__GrabSpinnerRemotely_d__33(UISpinner__GrabSpinnerRemotely_d__33 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1265};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field grabbingButton, offset: 0x30, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___grabbingButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISpinner__GrabSpinnerRemotely_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner__GrabSpinnerRemotely_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner__GrabSpinnerRemotely_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner__GrabSpinnerRemotely_d__33, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner__GrabSpinnerRemotely_d__33, ___grabbingButton) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISpinner__GrabSpinnerRemotely_d__33, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.TriggerButton, VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISpinner
class CORDL_TYPE UISpinner : public ::VROSC::UIInteractable {
public:
// Declarations
using _GrabSpinnerRemotely_d__33 = ::VROSC::UISpinner__GrabSpinnerRemotely_d__33;

 __declspec(property(get=get_Data)) ::VROSC::UISpinnerData*  Data;

 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field InverseSpinners, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_InverseSpinners, put=setStaticF_InverseSpinners)) bool  InverseSpinners;

 __declspec(property(get=get_IsGrabbingRemotely, put=set_IsGrabbingRemotely)) bool  IsGrabbingRemotely;

/// @brief Field OnSelectionChanged, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSelectionChanged, put=__cordl_internal_set_OnSelectionChanged)) ::System::Action_1<int32_t>*  OnSelectionChanged;

 __declspec(property(get=get_Selection, put=set_Selection)) int32_t  Selection;

 __declspec(property(get=get_Size)) ::UnityEngine::Vector2  Size;

 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field <IsGrabbingRemotely>k__BackingField, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGrabbingRemotely_k__BackingField, put=__cordl_internal_set__IsGrabbingRemotely_k__BackingField)) bool  _IsGrabbingRemotely_k__BackingField;

/// @brief Field <Selection>k__BackingField, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__Selection_k__BackingField, put=__cordl_internal_set__Selection_k__BackingField)) int32_t  _Selection_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) float_t  _Value_k__BackingField;

/// @brief Field _data, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::VROSC::UISpinnerData*  _data;

/// @brief Field _grabbingButton, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabbingButton, put=__cordl_internal_set__grabbingButton)) ::VROSC::TriggerButton  _grabbingButton;

/// @brief Field _grabbingDevice, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _nextButton, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextButton, put=__cordl_internal_set__nextButton)) ::UnityW<::VROSC::UIButton>  _nextButton;

/// @brief Field _previousButton, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousButton, put=__cordl_internal_set__previousButton)) ::UnityW<::VROSC::UIButton>  _previousButton;

/// @brief Field _remapValue, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__remapValue, put=__cordl_internal_set__remapValue)) ::VROSC::MinMaxInt*  _remapValue;

/// @brief Field _sizeTransform, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sizeTransform, put=__cordl_internal_set__sizeTransform)) ::UnityW<::UnityEngine::RectTransform>  _sizeTransform;

/// @brief Field _valueDisplay, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueDisplay, put=__cordl_internal_set__valueDisplay)) ::UnityW<::TMPro::TextMeshPro>  _valueDisplay;

/// @brief Method ButtonWasPressed, addr 0x1775de8, size 0x118, virtual false, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData, bool  pressed) ;

/// @brief Method GetSize, addr 0x177551c, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetSize() ;

/// @brief Method GrabSpinnerRemotely, addr 0x1775f00, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabSpinnerRemotely(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton) ;

static inline ::VROSC::UISpinner* New_ctor() ;

/// @brief Method Next, addr 0x17761e4, size 0x14, virtual false, abstract: false, final false
inline void Next() ;

/// @brief Method OnDisable, addr 0x1775a80, size 0x130, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x177623c, size 0x64, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x17758f8, size 0x10c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Previous, addr 0x17761f8, size 0x14, virtual false, abstract: false, final false
inline void Previous() ;

/// @brief Method SetButtonsDisabled, addr 0x1775a04, size 0x7c, virtual false, abstract: false, final false
inline void SetButtonsDisabled(bool  disabled) ;

/// @brief Method SetDisabled, addr 0x177620c, size 0x30, virtual true, abstract: false, final false
inline void SetDisabled(::System::Object*  disabler, bool  shouldBeDisabled) ;

/// @brief Method SetFloatValue, addr 0x177607c, size 0x168, virtual false, abstract: false, final false
inline void SetFloatValue(float_t  value) ;

/// @brief Method SetRemappedValue, addr 0x1776054, size 0x28, virtual false, abstract: false, final false
inline void SetRemappedValue(int32_t  value, bool  force, bool  useCallback) ;

/// @brief Method SetSelectedIndex, addr 0x1775c40, size 0x1a8, virtual false, abstract: false, final false
inline void SetSelectedIndex(int32_t  index, bool  force, bool  useCallback) ;

/// @brief Method Setup, addr 0x1775c18, size 0x28, virtual false, abstract: false, final false
inline void Setup(::VROSC::MinMaxInt*  remapValue, int32_t  startValue) ;

/// @brief Method Start, addr 0x17755f8, size 0x300, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopGrabSpinner, addr 0x1775fa4, size 0xb0, virtual false, abstract: false, final false
inline void StopGrabSpinner(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method StopGrabSpinnerRemotely, addr 0x1775bb0, size 0x68, virtual false, abstract: false, final false
inline void StopGrabSpinnerRemotely(::VROSC::InputDevice*  device) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnSelectionChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnSelectionChanged() ;

constexpr bool const& __cordl_internal_get__IsGrabbingRemotely_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsGrabbingRemotely_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Selection_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Selection_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Value_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Value_k__BackingField() ;

constexpr ::VROSC::UISpinnerData* const& __cordl_internal_get__data() const;

constexpr ::VROSC::UISpinnerData*& __cordl_internal_get__data() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__grabbingButton() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__nextButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__nextButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__previousButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__previousButton() ;

constexpr ::VROSC::MinMaxInt* const& __cordl_internal_get__remapValue() const;

constexpr ::VROSC::MinMaxInt*& __cordl_internal_get__remapValue() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__sizeTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__sizeTransform() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__valueDisplay() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__valueDisplay() ;

constexpr void __cordl_internal_set_OnSelectionChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__IsGrabbingRemotely_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Selection_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__data(::VROSC::UISpinnerData*  value) ;

constexpr void __cordl_internal_set__grabbingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__nextButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__previousButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__remapValue(::VROSC::MinMaxInt*  value) ;

constexpr void __cordl_internal_set__sizeTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__valueDisplay(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x17762a0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_InverseSpinners() ;

/// @brief Method get_Data, addr 0x17755f0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UISpinnerData* get_Data() ;

/// @brief Method get_InteractionStopsLaser, addr 0x17754dc, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

/// @brief Method get_IsGrabbingRemotely, addr 0x17754f0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsGrabbingRemotely() ;

/// @brief Method get_Selection, addr 0x1775500, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Selection() ;

/// @brief Method get_Size, addr 0x1775518, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Size() ;

/// @brief Method get_Value, addr 0x1775510, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

static inline void setStaticF_InverseSpinners(bool  value) ;

/// @brief Method set_IsGrabbingRemotely, addr 0x17754e4, size 0xc, virtual false, abstract: false, final false
inline void set_IsGrabbingRemotely(bool  value) ;

/// @brief Method set_Selection, addr 0x17754f8, size 0x8, virtual false, abstract: false, final false
inline void set_Selection(int32_t  value) ;

/// @brief Method set_Value, addr 0x1775508, size 0x8, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISpinner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISpinner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISpinner(UISpinner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISpinner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISpinner(UISpinner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1266};

/// @brief Field <IsGrabbingRemotely>k__BackingField, offset: 0x90, size: 0x1, def value: None
 bool  ____IsGrabbingRemotely_k__BackingField;

/// @brief Field <Selection>k__BackingField, offset: 0x94, size: 0x4, def value: None
 int32_t  ____Selection_k__BackingField;

/// @brief Field <Value>k__BackingField, offset: 0x98, size: 0x4, def value: None
 float_t  ____Value_k__BackingField;

/// @brief Field _nextButton, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____nextButton;

/// @brief Field _previousButton, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____previousButton;

/// @brief Field OnSelectionChanged, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnSelectionChanged;

/// @brief Field _valueDisplay, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____valueDisplay;

/// @brief Field _data, offset: 0xc0, size: 0x8, def value: None
 ::VROSC::UISpinnerData*  ____data;

/// @brief Field _sizeTransform, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____sizeTransform;

/// @brief Field _grabbingDevice, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

/// @brief Field _remapValue, offset: 0xd8, size: 0x8, def value: None
 ::VROSC::MinMaxInt*  ____remapValue;

/// @brief Field _grabbingButton, offset: 0xe0, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____grabbingButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISpinner, ____IsGrabbingRemotely_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____Selection_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____Value_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____nextButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____previousButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ___OnSelectionChanged) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____valueDisplay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____data) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____sizeTransform) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____grabbingDevice) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____remapValue) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinner, ____grabbingButton) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISpinner, 0xe8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISpinner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISpinner*, "VROSC", "UISpinner");
NEED_NO_BOX(::VROSC::UISpinner__GrabSpinnerRemotely_d__33);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISpinner__GrabSpinnerRemotely_d__33*, "VROSC", "UISpinner/<GrabSpinnerRemotely>d__33");
