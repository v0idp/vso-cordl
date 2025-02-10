#pragma once
// IWYU pragma private; include "VROSC/NoteBoardTextDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoardTextDisplay)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class NoteBoardNoteText;
}
namespace VROSC {
class NoteBoardTextDisplay__Animate_d__7;
}
namespace VROSC {
struct NoteBoard_PlayAxis;
}
// Forward declare root types
namespace VROSC {
class NoteBoardTextDisplay;
}
namespace VROSC {
class NoteBoardTextDisplay__Animate_d__7;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardTextDisplay);
MARK_REF_PTR_T(::VROSC::NoteBoardTextDisplay__Animate_d__7);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardTextDisplay/<Animate>d__7
class CORDL_TYPE NoteBoardTextDisplay__Animate_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::NoteBoardTextDisplay>  __4__this;

/// @brief Field <current>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__current_5__2, put=__cordl_internal_set__current_5__2)) int32_t  _current_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17b2550, size 0x108, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::NoteBoardTextDisplay__Animate_d__7* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17b2658, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17b2660, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17b2698, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17b254c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::NoteBoardTextDisplay> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::NoteBoardTextDisplay>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__current_5__2() const;

constexpr int32_t& __cordl_internal_get__current_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::NoteBoardTextDisplay>  value) ;

constexpr void __cordl_internal_set__current_5__2(int32_t  value) ;

/// @brief Method .ctor, addr 0x17b251c, size 0x28, virtual false, abstract: false, final false
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
constexpr NoteBoardTextDisplay__Animate_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardTextDisplay__Animate_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardTextDisplay__Animate_d__7(NoteBoardTextDisplay__Animate_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardTextDisplay__Animate_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardTextDisplay__Animate_d__7(NoteBoardTextDisplay__Animate_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1442};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardTextDisplay>  _____4__this;

/// @brief Field <current>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____current_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardTextDisplay__Animate_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardTextDisplay__Animate_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardTextDisplay__Animate_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardTextDisplay__Animate_d__7, ____current_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardTextDisplay__Animate_d__7, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardTextDisplay
class CORDL_TYPE NoteBoardTextDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Animate_d__7 = ::VROSC::NoteBoardTextDisplay__Animate_d__7;

/// @brief Field _colorize, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__colorize, put=__cordl_internal_set__colorize)) bool  _colorize;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::VROSC::NoteBoardNoteController>  _controller;

/// @brief Field _displayAxises, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayAxises, put=__cordl_internal_set__displayAxises)) ::ArrayW<::VROSC::NoteBoard_PlayAxis,::Array<::VROSC::NoteBoard_PlayAxis>*>  _displayAxises;

/// @brief Field _noteTexts, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteTexts, put=__cordl_internal_set__noteTexts)) ::ArrayW<::UnityW<::VROSC::NoteBoardNoteText>,::Array<::UnityW<::VROSC::NoteBoardNoteText>>*>  _noteTexts;

/// @brief Field _showDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__showDuration, put=__cordl_internal_set__showDuration)) float_t  _showDuration;

/// @brief Method Animate, addr 0x17b242c, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Animate() ;

static inline ::VROSC::NoteBoardTextDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x17b2510, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17b237c, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetAllActive, addr 0x17b248c, size 0x84, virtual false, abstract: false, final false
inline void SetAllActive(bool  active, ::VROSC::NoteBoard_PlayAxis  axis) ;

constexpr bool const& __cordl_internal_get__colorize() const;

constexpr bool& __cordl_internal_get__colorize() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__controller() ;

constexpr ::ArrayW<::VROSC::NoteBoard_PlayAxis,::Array<::VROSC::NoteBoard_PlayAxis>*> const& __cordl_internal_get__displayAxises() const;

constexpr ::ArrayW<::VROSC::NoteBoard_PlayAxis,::Array<::VROSC::NoteBoard_PlayAxis>*>& __cordl_internal_get__displayAxises() ;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNoteText>,::Array<::UnityW<::VROSC::NoteBoardNoteText>>*> const& __cordl_internal_get__noteTexts() const;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNoteText>,::Array<::UnityW<::VROSC::NoteBoardNoteText>>*>& __cordl_internal_get__noteTexts() ;

constexpr float_t const& __cordl_internal_get__showDuration() const;

constexpr float_t& __cordl_internal_get__showDuration() ;

constexpr void __cordl_internal_set__colorize(bool  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__displayAxises(::ArrayW<::VROSC::NoteBoard_PlayAxis,::Array<::VROSC::NoteBoard_PlayAxis>*>  value) ;

constexpr void __cordl_internal_set__noteTexts(::ArrayW<::UnityW<::VROSC::NoteBoardNoteText>,::Array<::UnityW<::VROSC::NoteBoardNoteText>>*>  value) ;

constexpr void __cordl_internal_set__showDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x17b2544, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardTextDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardTextDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardTextDisplay(NoteBoardTextDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardTextDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardTextDisplay(NoteBoardTextDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1443};

/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____controller;

/// @brief Field _displayAxises, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::VROSC::NoteBoard_PlayAxis,::Array<::VROSC::NoteBoard_PlayAxis>*>  ____displayAxises;

/// @brief Field _showDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ____showDuration;

/// @brief Field _colorize, offset: 0x34, size: 0x1, def value: None
 bool  ____colorize;

/// @brief Field _noteTexts, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::NoteBoardNoteText>,::Array<::UnityW<::VROSC::NoteBoardNoteText>>*>  ____noteTexts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardTextDisplay, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardTextDisplay, ____displayAxises) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardTextDisplay, ____showDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardTextDisplay, ____colorize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardTextDisplay, ____noteTexts) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardTextDisplay, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardTextDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardTextDisplay*, "VROSC", "NoteBoardTextDisplay");
NEED_NO_BOX(::VROSC::NoteBoardTextDisplay__Animate_d__7);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardTextDisplay__Animate_d__7*, "VROSC", "NoteBoardTextDisplay/<Animate>d__7");
