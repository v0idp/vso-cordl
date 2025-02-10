#pragma once
// IWYU pragma private; include "NatSuite/Examples/Components/RecordButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordButton)
namespace NatSuite::Examples::Components {
class RecordButton__Countdown_d__10;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace NatSuite::Examples::Components {
class RecordButton;
}
namespace NatSuite::Examples::Components {
class RecordButton__Countdown_d__10;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Examples::Components::RecordButton);
MARK_REF_PTR_T(::NatSuite::Examples::Components::RecordButton__Countdown_d__10);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace NatSuite::Examples::Components {
// Is value type: false
// CS Name: NatSuite.Examples.Components.RecordButton/<Countdown>d__10
class CORDL_TYPE RecordButton__Countdown_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::NatSuite::Examples::Components::RecordButton>  __4__this;

/// @brief Field <startTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18026e4, size 0x170, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::NatSuite::Examples::Components::RecordButton__Countdown_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802854, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x180285c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802894, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18026e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::NatSuite::Examples::Components::RecordButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::NatSuite::Examples::Components::RecordButton>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::NatSuite::Examples::Components::RecordButton>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x18026b0, size 0x28, virtual false, abstract: false, final false
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
constexpr RecordButton__Countdown_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecordButton__Countdown_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordButton__Countdown_d__10(RecordButton__Countdown_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordButton__Countdown_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordButton__Countdown_d__10(RecordButton__Countdown_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1794};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::NatSuite::Examples::Components::RecordButton>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::Components::RecordButton__Countdown_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::RecordButton__Countdown_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::RecordButton__Countdown_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::RecordButton__Countdown_d__10, ____startTime_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::Components::RecordButton__Countdown_d__10, 0x30>, "Size mismatch!");

} // namespace end def NatSuite::Examples::Components
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerDownHandler, UnityEngine.EventSystems.IPointerUpHandler, UnityEngine.MonoBehaviour
namespace NatSuite::Examples::Components {
// Is value type: false
// CS Name: NatSuite.Examples.Components.RecordButton
class CORDL_TYPE RecordButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Countdown_d__10 = ::NatSuite::Examples::Components::RecordButton__Countdown_d__10;

/// @brief Field button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::UnityEngine::UI::Image>  button;

/// @brief Field countdown, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdown, put=__cordl_internal_set_countdown)) ::UnityW<::UnityEngine::UI::Image>  countdown;

/// @brief Field onTouchDown, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTouchDown, put=__cordl_internal_set_onTouchDown)) ::UnityEngine::Events::UnityEvent*  onTouchDown;

/// @brief Field onTouchUp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTouchUp, put=__cordl_internal_set_onTouchUp)) ::UnityEngine::Events::UnityEvent*  onTouchUp;

/// @brief Field pressed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_pressed, put=__cordl_internal_set_pressed)) bool  pressed;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Method Countdown, addr 0x1802648, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Countdown() ;

static inline ::NatSuite::Examples::Components::RecordButton* New_ctor() ;

/// @brief Method Reset, addr 0x180256c, size 0xbc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0x1802568, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown, addr 0x1802628, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp, addr 0x18026a8, size 0x8, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_button() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_countdown() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_countdown() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTouchDown() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTouchDown() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTouchUp() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTouchUp() ;

constexpr bool const& __cordl_internal_get_pressed() const;

constexpr bool& __cordl_internal_get_pressed() ;

constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_countdown(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_onTouchDown(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onTouchUp(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_pressed(bool  value) ;

/// @brief Method .ctor, addr 0x18026d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecordButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecordButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordButton(RecordButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordButton(RecordButton const& ) = delete;

/// @brief Field MaxRecordingTime offset 0xffffffff size 0x4
static constexpr float_t  MaxRecordingTime{static_cast<float_t>(10.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1795};

/// @brief Field button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___button;

/// @brief Field countdown, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___countdown;

/// @brief Field onTouchDown, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTouchDown;

/// @brief Field onTouchUp, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTouchUp;

/// @brief Field pressed, offset: 0x40, size: 0x1, def value: None
 bool  ___pressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::Components::RecordButton, ___button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::RecordButton, ___countdown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::RecordButton, ___onTouchDown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::RecordButton, ___onTouchUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::RecordButton, ___pressed) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::Components::RecordButton, 0x48>, "Size mismatch!");

} // namespace end def NatSuite::Examples::Components
NEED_NO_BOX(::NatSuite::Examples::Components::RecordButton);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::Components::RecordButton*, "NatSuite.Examples.Components", "RecordButton");
NEED_NO_BOX(::NatSuite::Examples::Components::RecordButton__Countdown_d__10);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::Components::RecordButton__Countdown_d__10*, "NatSuite.Examples.Components", "RecordButton/<Countdown>d__10");
