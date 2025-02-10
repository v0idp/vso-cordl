#pragma once
// IWYU pragma private; include "VROSC/UIHoldButton.hpp"
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
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIHoldButton)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SimpleHaptic;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class UIHoldButton__Pressing_d__20;
}
// Forward declare root types
namespace VROSC {
class UIHoldButton;
}
namespace VROSC {
class UIHoldButton__Pressing_d__20;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIHoldButton);
MARK_REF_PTR_T(::VROSC::UIHoldButton__Pressing_d__20);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIHoldButton/<Pressing>d__20
class CORDL_TYPE UIHoldButton__Pressing_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIHoldButton>  __4__this;

/// @brief Field clickData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clickData, put=__cordl_internal_set_clickData)) ::VROSC::ClickData*  clickData;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1772ccc, size 0x1f8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIHoldButton__Pressing_d__20* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1772ec4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1772ecc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1772f04, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1772cc8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::ClickData* const& __cordl_internal_get_clickData() const;

constexpr ::VROSC::ClickData*& __cordl_internal_get_clickData() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIHoldButton>  value) ;

constexpr void __cordl_internal_set_clickData(::VROSC::ClickData*  value) ;

/// @brief Method .ctor, addr 0x1772c84, size 0x28, virtual false, abstract: false, final false
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
constexpr UIHoldButton__Pressing_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHoldButton__Pressing_d__20", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHoldButton__Pressing_d__20(UIHoldButton__Pressing_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHoldButton__Pressing_d__20", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHoldButton__Pressing_d__20(UIHoldButton__Pressing_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1257};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  _____4__this;

/// @brief Field clickData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::ClickData*  ___clickData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIHoldButton__Pressing_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton__Pressing_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton__Pressing_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton__Pressing_d__20, ___clickData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIHoldButton__Pressing_d__20, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, VROSC.TriggerButton, VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIHoldButton
class CORDL_TYPE UIHoldButton : public ::VROSC::UIInteractable {
public:
// Declarations
using _Pressing_d__20 = ::VROSC::UIHoldButton__Pressing_d__20;

 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field OnPressCompleted, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPressCompleted, put=__cordl_internal_set_OnPressCompleted)) ::System::Action*  OnPressCompleted;

/// @brief Field _adjustableMesh, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

/// @brief Field _color, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _hapticFeedBack, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticFeedBack, put=__cordl_internal_set__hapticFeedBack)) ::VROSC::SimpleHaptic*  _hapticFeedBack;

/// @brief Field _heldBy, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__heldBy, put=__cordl_internal_set__heldBy)) ::UnityW<::VROSC::InputDevice>  _heldBy;

/// @brief Field _heldByButton, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__heldByButton, put=__cordl_internal_set__heldByButton)) ::VROSC::TriggerButton  _heldByButton;

/// @brief Field _inProgressText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__inProgressText, put=__cordl_internal_set__inProgressText)) ::UnityW<::TMPro::TextMeshPro>  _inProgressText;

/// @brief Field _pressCompleteToken, offset 0xcd, size 0x1 
 __declspec(property(get=__cordl_internal_get__pressCompleteToken, put=__cordl_internal_set__pressCompleteToken)) bool  _pressCompleteToken;

/// @brief Field _pressTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressTime, put=__cordl_internal_set__pressTime)) float_t  _pressTime;

/// @brief Field _pressedFor, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedFor, put=__cordl_internal_set__pressedFor)) float_t  _pressedFor;

/// @brief Field _pressing, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get__pressing, put=__cordl_internal_set__pressing)) bool  _pressing;

/// @brief Field _previewValue, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewValue, put=__cordl_internal_set__previewValue)) float_t  _previewValue;

/// @brief Method ButtonWasPressed, addr 0x1772b98, size 0x80, virtual false, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData, bool  pressed) ;

static inline ::VROSC::UIHoldButton* New_ctor() ;

/// @brief Method OnAnyPressEnd, addr 0x1772b08, size 0x90, virtual false, abstract: false, final false
inline void OnAnyPressEnd(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method OnDestroy, addr 0x1772978, size 0x190, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1772664, size 0x74, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Pressing, addr 0x1772c18, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Pressing(::VROSC::ClickData*  clickData) ;

/// @brief Method SetValue, addr 0x17726d8, size 0xdc, virtual false, abstract: false, final false
inline void SetValue(float_t  value) ;

/// @brief Method Start, addr 0x17727e8, size 0x190, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x17727b4, size 0x34, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPressCompleted() const;

constexpr ::System::Action*& __cordl_internal_get_OnPressCompleted() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__hapticFeedBack() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__hapticFeedBack() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__heldBy() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__heldBy() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__heldByButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__heldByButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__inProgressText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__inProgressText() ;

constexpr bool const& __cordl_internal_get__pressCompleteToken() const;

constexpr bool& __cordl_internal_get__pressCompleteToken() ;

constexpr float_t const& __cordl_internal_get__pressTime() const;

constexpr float_t& __cordl_internal_get__pressTime() ;

constexpr float_t const& __cordl_internal_get__pressedFor() const;

constexpr float_t& __cordl_internal_get__pressedFor() ;

constexpr bool const& __cordl_internal_get__pressing() const;

constexpr bool& __cordl_internal_get__pressing() ;

constexpr float_t const& __cordl_internal_get__previewValue() const;

constexpr float_t& __cordl_internal_get__previewValue() ;

constexpr void __cordl_internal_set_OnPressCompleted(::System::Action*  value) ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hapticFeedBack(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__heldBy(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__heldByButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__inProgressText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__pressCompleteToken(bool  value) ;

constexpr void __cordl_internal_set__pressTime(float_t  value) ;

constexpr void __cordl_internal_set__pressedFor(float_t  value) ;

constexpr void __cordl_internal_set__pressing(bool  value) ;

constexpr void __cordl_internal_set__previewValue(float_t  value) ;

/// @brief Method .ctor, addr 0x1772cac, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x177265c, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIHoldButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHoldButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHoldButton(UIHoldButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHoldButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHoldButton(UIHoldButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1258};

/// @brief Field _inProgressText, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____inProgressText;

/// @brief Field _pressTime, offset: 0x98, size: 0x4, def value: None
 float_t  ____pressTime;

/// @brief Field _adjustableMesh, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

/// @brief Field _color, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _previewValue, offset: 0xb8, size: 0x4, def value: None
 float_t  ____previewValue;

/// @brief Field _hapticFeedBack, offset: 0xc0, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____hapticFeedBack;

/// @brief Field _pressedFor, offset: 0xc8, size: 0x4, def value: None
 float_t  ____pressedFor;

/// @brief Field _pressing, offset: 0xcc, size: 0x1, def value: None
 bool  ____pressing;

/// @brief Field _pressCompleteToken, offset: 0xcd, size: 0x1, def value: None
 bool  ____pressCompleteToken;

/// @brief Field _heldBy, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____heldBy;

/// @brief Field _heldByButton, offset: 0xd8, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____heldByButton;

/// @brief Field OnPressCompleted, offset: 0xe0, size: 0x8, def value: None
 ::System::Action*  ___OnPressCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIHoldButton, ____inProgressText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____pressTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____adjustableMesh) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____color) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____previewValue) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____hapticFeedBack) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____pressedFor) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____pressing) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____pressCompleteToken) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____heldBy) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ____heldByButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHoldButton, ___OnPressCompleted) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIHoldButton, 0xe8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIHoldButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHoldButton*, "VROSC", "UIHoldButton");
NEED_NO_BOX(::VROSC::UIHoldButton__Pressing_d__20);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHoldButton__Pressing_d__20*, "VROSC", "UIHoldButton/<Pressing>d__20");
