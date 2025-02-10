#pragma once
// IWYU pragma private; include "VROSC/UIColorPicker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__UIInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIColorPicker)
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
namespace UnityEngine {
struct Color;
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
struct TriggerButton;
}
namespace VROSC {
class UIColorPicker_UIColorPickerData;
}
namespace VROSC {
class UIColorPicker__GrabPicker_d__23;
}
namespace VROSC {
class UIColorPicker__GrabSliderRemotely_d__21;
}
// Forward declare root types
namespace VROSC {
class UIColorPicker;
}
namespace VROSC {
class UIColorPicker_UIColorPickerData;
}
namespace VROSC {
class UIColorPicker__GrabPicker_d__23;
}
namespace VROSC {
class UIColorPicker__GrabSliderRemotely_d__21;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIColorPicker);
MARK_REF_PTR_T(::VROSC::UIColorPicker_UIColorPickerData);
MARK_REF_PTR_T(::VROSC::UIColorPicker__GrabPicker_d__23);
MARK_REF_PTR_T(::VROSC::UIColorPicker__GrabSliderRemotely_d__21);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPicker/UIColorPickerData
class CORDL_TYPE UIColorPicker_UIColorPickerData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

/// @brief Field _displayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

static inline ::VROSC::UIColorPicker_UIColorPickerData* New_ctor() ;

/// @brief Method SetDisplayName, addr 0x177eae4, size 0x8, virtual false, abstract: false, final false
inline void SetDisplayName(::StringW  displayName) ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

/// @brief Method .ctor, addr 0x177eaec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x177eadc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorPicker_UIColorPickerData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker_UIColorPickerData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPicker_UIColorPickerData(UIColorPicker_UIColorPickerData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker_UIColorPickerData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPicker_UIColorPickerData(UIColorPicker_UIColorPickerData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1300};

/// @brief Field _displayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPicker_UIColorPickerData, ____displayName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPicker_UIColorPickerData, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPicker/<GrabPicker>d__23
class CORDL_TYPE UIColorPicker__GrabPicker_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIColorPicker>  __4__this;

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

/// @brief Method MoveNext, addr 0x177eaf8, size 0x354, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIColorPicker__GrabPicker_d__23* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x177ee4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x177ee54, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x177ee8c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x177eaf4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIColorPicker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIColorPicker>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_grabbingButton() ;

constexpr bool const& __cordl_internal_get_pointing() const;

constexpr bool& __cordl_internal_get_pointing() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIColorPicker>  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set_pointing(bool  value) ;

/// @brief Method .ctor, addr 0x177eaac, size 0x28, virtual false, abstract: false, final false
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
constexpr UIColorPicker__GrabPicker_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker__GrabPicker_d__23", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPicker__GrabPicker_d__23(UIColorPicker__GrabPicker_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker__GrabPicker_d__23", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPicker__GrabPicker_d__23(UIColorPicker__GrabPicker_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1301};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPicker>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field grabbingButton, offset: 0x30, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___grabbingButton;

/// @brief Field pointing, offset: 0x34, size: 0x1, def value: None
 bool  ___pointing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPicker__GrabPicker_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabPicker_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabPicker_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabPicker_d__23, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabPicker_d__23, ___grabbingButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabPicker_d__23, ___pointing) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPicker__GrabPicker_d__23, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPicker/<GrabSliderRemotely>d__21
class CORDL_TYPE UIColorPicker__GrabSliderRemotely_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIColorPicker>  __4__this;

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

/// @brief Method MoveNext, addr 0x177ee98, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIColorPicker__GrabSliderRemotely_d__21* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x177efb8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x177efc0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x177eff8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x177ee94, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIColorPicker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIColorPicker>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_grabbingButton() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIColorPicker>  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value) ;

/// @brief Method .ctor, addr 0x177ea84, size 0x28, virtual false, abstract: false, final false
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
constexpr UIColorPicker__GrabSliderRemotely_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker__GrabSliderRemotely_d__21", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPicker__GrabSliderRemotely_d__21(UIColorPicker__GrabSliderRemotely_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker__GrabSliderRemotely_d__21", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPicker__GrabSliderRemotely_d__21(UIColorPicker__GrabSliderRemotely_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1302};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPicker>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field grabbingButton, offset: 0x30, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___grabbingButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPicker__GrabSliderRemotely_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabSliderRemotely_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabSliderRemotely_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabSliderRemotely_d__21, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker__GrabSliderRemotely_d__21, ___grabbingButton) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPicker__GrabSliderRemotely_d__21, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, VROSC.TriggerButton, VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPicker
class CORDL_TYPE UIColorPicker : public ::VROSC::UIInteractable {
public:
// Declarations
using UIColorPickerData = ::VROSC::UIColorPicker_UIColorPickerData;

using _GrabPicker_d__23 = ::VROSC::UIColorPicker__GrabPicker_d__23;

using _GrabSliderRemotely_d__21 = ::VROSC::UIColorPicker__GrabSliderRemotely_d__21;

 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_Data)) ::VROSC::UIColorPicker_UIColorPickerData*  Data;

/// @brief Field OnColorPicked, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorPicked, put=__cordl_internal_set_OnColorPicked)) ::System::Action_1<::UnityEngine::Color>*  OnColorPicked;

 __declspec(property(get=get_Size)) ::UnityEngine::Vector2  Size;

/// @brief Field <Color>k__BackingField, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::UnityEngine::Color  _Color_k__BackingField;

/// @brief Field _data, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::VROSC::UIColorPicker_UIColorPickerData*  _data;

/// @brief Field _grabbingButton, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabbingButton, put=__cordl_internal_set__grabbingButton)) ::VROSC::TriggerButton  _grabbingButton;

/// @brief Field _grabbingDevice, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _rectTransform, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _uiHelperActive, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get__uiHelperActive, put=__cordl_internal_set__uiHelperActive)) bool  _uiHelperActive;

/// @brief Method Awake, addr 0x177e318, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonWasPressed, addr 0x177e868, size 0x120, virtual false, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

/// @brief Method GetRectTransform, addr 0x177e3e8, size 0x8c, virtual false, abstract: false, final false
inline void GetRectTransform() ;

/// @brief Method GetSize, addr 0x177e21c, size 0xdc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetSize() ;

/// @brief Method GrabPicker, addr 0x177e9fc, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabPicker(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton, bool  pointing) ;

/// @brief Method GrabSliderRemotely, addr 0x177e988, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabSliderRemotely(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton) ;

static inline ::VROSC::UIColorPicker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x177e474, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x177e644, size 0x118, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x177e54c, size 0xf8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x1778fa8, size 0x28, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color, bool  useCallback) ;

/// @brief Method StopGrabPicker, addr 0x177e7b8, size 0xb0, virtual false, abstract: false, final false
inline void StopGrabPicker(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method StopGrabRemotely, addr 0x177e75c, size 0x5c, virtual false, abstract: false, final false
inline void StopGrabRemotely(::VROSC::InputDevice*  device) ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnColorPicked() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnColorPicked() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__Color_k__BackingField() ;

constexpr ::VROSC::UIColorPicker_UIColorPickerData* const& __cordl_internal_get__data() const;

constexpr ::VROSC::UIColorPicker_UIColorPickerData*& __cordl_internal_get__data() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__grabbingButton() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr bool const& __cordl_internal_get__uiHelperActive() const;

constexpr bool& __cordl_internal_get__uiHelperActive() ;

constexpr void __cordl_internal_set_OnColorPicked(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__Color_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__data(::VROSC::UIColorPicker_UIColorPickerData*  value) ;

constexpr void __cordl_internal_set__grabbingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__uiHelperActive(bool  value) ;

/// @brief Method .ctor, addr 0x177ead4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x177e30c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_Data, addr 0x177e2f8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UIColorPicker_UIColorPickerData* get_Data() ;

/// @brief Method get_Size, addr 0x1778e0c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Size() ;

/// @brief Method set_Color, addr 0x177e300, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorPicker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPicker(UIColorPicker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPicker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPicker(UIColorPicker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1303};

/// @brief Field <Color>k__BackingField, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Color  ____Color_k__BackingField;

/// @brief Field OnColorPicked, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnColorPicked;

/// @brief Field _data, offset: 0xa8, size: 0x8, def value: None
 ::VROSC::UIColorPicker_UIColorPickerData*  ____data;

/// @brief Field _grabbingDevice, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

/// @brief Field _grabbingButton, offset: 0xb8, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____grabbingButton;

/// @brief Field _uiHelperActive, offset: 0xbc, size: 0x1, def value: None
 bool  ____uiHelperActive;

/// @brief Field _rectTransform, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPicker, ____Color_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker, ___OnColorPicked) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker, ____data) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker, ____grabbingDevice) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker, ____grabbingButton) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker, ____uiHelperActive) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPicker, ____rectTransform) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPicker, 0xc8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIColorPicker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPicker*, "VROSC", "UIColorPicker");
NEED_NO_BOX(::VROSC::UIColorPicker_UIColorPickerData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPicker_UIColorPickerData*, "VROSC", "UIColorPicker/UIColorPickerData");
NEED_NO_BOX(::VROSC::UIColorPicker__GrabPicker_d__23);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPicker__GrabPicker_d__23*, "VROSC", "UIColorPicker/<GrabPicker>d__23");
NEED_NO_BOX(::VROSC::UIColorPicker__GrabSliderRemotely_d__21);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPicker__GrabSliderRemotely_d__21*, "VROSC", "UIColorPicker/<GrabSliderRemotely>d__21");
