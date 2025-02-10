#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteController.hpp"
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
CORDL_MODULE_EXPORT(NoteBoardNoteController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class NoteBoardNoteController_HoveredNoteBoardNote;
}
namespace VROSC {
class NoteBoardNoteController__BlinkNotes_d__28;
}
namespace VROSC {
class NoteBoardNote;
}
namespace VROSC {
class NoteFieldData;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
class NoteFieldParameters;
}
namespace VROSC {
class NotefieldAnimationSettings;
}
namespace VROSC {
class NotefieldColorSettings;
}
// Forward declare root types
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class NoteBoardNoteController_HoveredNoteBoardNote;
}
namespace VROSC {
class NoteBoardNoteController__BlinkNotes_d__28;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardNoteController);
MARK_REF_PTR_T(::VROSC::NoteBoardNoteController_HoveredNoteBoardNote);
MARK_REF_PTR_T(::VROSC::NoteBoardNoteController__BlinkNotes_d__28);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteController/HoveredNoteBoardNote
class CORDL_TYPE NoteBoardNoteController_HoveredNoteBoardNote : public ::System::Object {
public:
// Declarations
/// @brief Field Device, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Device, put=__cordl_internal_set_Device)) ::UnityW<::VROSC::InputDevice>  Device;

/// @brief Field NoteBoardNote, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NoteBoardNote, put=__cordl_internal_set_NoteBoardNote)) ::VROSC::NoteFieldNoteData*  NoteBoardNote;

static inline ::VROSC::NoteBoardNoteController_HoveredNoteBoardNote* New_ctor(::VROSC::NoteFieldNoteData*  noteBoardNote, ::VROSC::InputDevice*  device) ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_Device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_Device() ;

constexpr ::VROSC::NoteFieldNoteData* const& __cordl_internal_get_NoteBoardNote() const;

constexpr ::VROSC::NoteFieldNoteData*& __cordl_internal_get_NoteBoardNote() ;

constexpr void __cordl_internal_set_Device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_NoteBoardNote(::VROSC::NoteFieldNoteData*  value) ;

/// @brief Method .ctor, addr 0x17b58c4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NoteFieldNoteData*  noteBoardNote, ::VROSC::InputDevice*  device) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteController_HoveredNoteBoardNote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteController_HoveredNoteBoardNote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteController_HoveredNoteBoardNote(NoteBoardNoteController_HoveredNoteBoardNote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteController_HoveredNoteBoardNote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteController_HoveredNoteBoardNote(NoteBoardNoteController_HoveredNoteBoardNote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1446};

/// @brief Field NoteBoardNote, offset: 0x10, size: 0x8, def value: None
 ::VROSC::NoteFieldNoteData*  ___NoteBoardNote;

/// @brief Field Device, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___Device;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteController_HoveredNoteBoardNote, ___NoteBoardNote) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController_HoveredNoteBoardNote, ___Device) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteController/<BlinkNotes>d__28
class CORDL_TYPE NoteBoardNoteController__BlinkNotes_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::NoteBoardNoteController>  __4__this;

/// @brief Field <maxValue>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxValue_5__4, put=__cordl_internal_set__maxValue_5__4)) float_t  _maxValue_5__4;

/// @brief Field <period>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__period_5__3, put=__cordl_internal_set__period_5__3)) float_t  _period_5__3;

/// @brief Field <startTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17b5ebc, size 0x260, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::NoteBoardNoteController__BlinkNotes_d__28* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17b611c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17b6124, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17b615c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17b5eb8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__maxValue_5__4() const;

constexpr float_t& __cordl_internal_get__maxValue_5__4() ;

constexpr float_t const& __cordl_internal_get__period_5__3() const;

constexpr float_t& __cordl_internal_get__period_5__3() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__maxValue_5__4(float_t  value) ;

constexpr void __cordl_internal_set__period_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17b5c70, size 0x28, virtual false, abstract: false, final false
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
constexpr NoteBoardNoteController__BlinkNotes_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteController__BlinkNotes_d__28", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteController__BlinkNotes_d__28(NoteBoardNoteController__BlinkNotes_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteController__BlinkNotes_d__28", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteController__BlinkNotes_d__28(NoteBoardNoteController__BlinkNotes_d__28 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1447};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startTime_5__2;

/// @brief Field <period>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____period_5__3;

/// @brief Field <maxValue>5__4, offset: 0x30, size: 0x4, def value: None
 float_t  ____maxValue_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteController__BlinkNotes_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController__BlinkNotes_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController__BlinkNotes_d__28, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController__BlinkNotes_d__28, ____startTime_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController__BlinkNotes_d__28, ____period_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController__BlinkNotes_d__28, ____maxValue_5__4) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteController__BlinkNotes_d__28, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteController
class CORDL_TYPE NoteBoardNoteController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HoveredNoteBoardNote = ::VROSC::NoteBoardNoteController_HoveredNoteBoardNote;

using _BlinkNotes_d__28 = ::VROSC::NoteBoardNoteController__BlinkNotes_d__28;

 __declspec(property(get=get_NoteBoardNoteList)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*  NoteBoardNoteList;

 __declspec(property(get=get_NoteFieldData, put=set_NoteFieldData)) ::VROSC::NoteFieldData*  NoteFieldData;

/// @brief Field OnHover, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHover, put=__cordl_internal_set_OnHover)) ::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>*  OnHover;

/// @brief Field OnNewNotefieldCreated, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNewNotefieldCreated, put=__cordl_internal_set_OnNewNotefieldCreated)) ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  OnNewNotefieldCreated;

/// @brief Field OnNewNotefieldData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNewNotefieldData, put=__cordl_internal_set_OnNewNotefieldData)) ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  OnNewNotefieldData;

 __declspec(property(get=get_Settings)) ::UnityW<::VROSC::NotefieldAnimationSettings>  Settings;

/// @brief Field <NoteFieldData>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__NoteFieldData_k__BackingField, put=__cordl_internal_set__NoteFieldData_k__BackingField)) ::VROSC::NoteFieldData*  _NoteFieldData_k__BackingField;

/// @brief Field _blinkCoroutine, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__blinkCoroutine, put=__cordl_internal_set__blinkCoroutine)) ::UnityEngine::Coroutine*  _blinkCoroutine;

/// @brief Field _hoveredNoteBoardNotes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveredNoteBoardNotes, put=__cordl_internal_set__hoveredNoteBoardNotes)) ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>*  _hoveredNoteBoardNotes;

/// @brief Field _noteBoardNotes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteBoardNotes, put=__cordl_internal_set__noteBoardNotes)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*  _noteBoardNotes;

/// @brief Field _noteFieldPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteFieldPrefab, put=__cordl_internal_set__noteFieldPrefab)) ::UnityW<::VROSC::NoteBoardNote>  _noteFieldPrefab;

/// @brief Field _noteFieldSettings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteFieldSettings, put=__cordl_internal_set__noteFieldSettings)) ::UnityW<::VROSC::NotefieldColorSettings>  _noteFieldSettings;

/// @brief Field _settings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::VROSC::NotefieldAnimationSettings>  _settings;

/// @brief Field _size, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) ::UnityEngine::Vector3  _size;

/// @brief Method BlinkNotes, addr 0x17b5c10, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* BlinkNotes() ;

/// @brief Method ClearNotefield, addr 0x17b2718, size 0x1f8, virtual true, abstract: false, final false
inline void ClearNotefield() ;

/// @brief Method GetNote, addr 0x17b53d4, size 0x18, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldNoteData* GetNote(::UnityEngine::Vector3  normalizedPoint) ;

/// @brief Method GetNote, addr 0x17b5484, size 0x20, virtual true, abstract: false, final false
inline ::VROSC::NoteFieldNoteData* GetNote(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method GetVisualPosition, addr 0x17b2d98, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVisualPosition(int32_t  x, int32_t  y, int32_t  z, ::VROSC::NoteFieldParameters*  parameters, ::UnityEngine::Vector3  fieldSize) ;

/// @brief Method Hover, addr 0x17b54a4, size 0x3f8, virtual false, abstract: false, final false
inline void Hover(::VROSC::NoteFieldNoteData*  noteBoardNote, ::VROSC::InputDevice*  device) ;

/// @brief Method HoverEnd, addr 0x17b58f0, size 0x2f8, virtual false, abstract: false, final false
inline void HoverEnd(::VROSC::InputDevice*  device) ;

static inline ::VROSC::NoteBoardNoteController* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17b5e78, size 0x40, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method StartBlinkingNotes, addr 0x17b5be8, size 0x28, virtual false, abstract: false, final false
inline void StartBlinkingNotes() ;

/// @brief Method StopBlinkingNotes, addr 0x17b5c98, size 0x1d4, virtual false, abstract: false, final false
inline void StopBlinkingNotes() ;

/// @brief Method Update, addr 0x17b4e2c, size 0x150, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateNoteboard, addr 0x17b2d08, size 0x90, virtual true, abstract: false, final false
inline void UpdateNoteboard(::VROSC::NoteFieldParameters*  parameters) ;

constexpr ::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>* const& __cordl_internal_get_OnHover() const;

constexpr ::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>*& __cordl_internal_get_OnHover() ;

constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>* const& __cordl_internal_get_OnNewNotefieldCreated() const;

constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*& __cordl_internal_get_OnNewNotefieldCreated() ;

constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>* const& __cordl_internal_get_OnNewNotefieldData() const;

constexpr ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*& __cordl_internal_get_OnNewNotefieldData() ;

constexpr ::VROSC::NoteFieldData* const& __cordl_internal_get__NoteFieldData_k__BackingField() const;

constexpr ::VROSC::NoteFieldData*& __cordl_internal_get__NoteFieldData_k__BackingField() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__blinkCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__blinkCoroutine() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>* const& __cordl_internal_get__hoveredNoteBoardNotes() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>*& __cordl_internal_get__hoveredNoteBoardNotes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>* const& __cordl_internal_get__noteBoardNotes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*& __cordl_internal_get__noteBoardNotes() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__noteFieldPrefab() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__noteFieldPrefab() ;

constexpr ::UnityW<::VROSC::NotefieldColorSettings> const& __cordl_internal_get__noteFieldSettings() const;

constexpr ::UnityW<::VROSC::NotefieldColorSettings>& __cordl_internal_get__noteFieldSettings() ;

constexpr ::UnityW<::VROSC::NotefieldAnimationSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::VROSC::NotefieldAnimationSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__size() ;

constexpr void __cordl_internal_set_OnHover(::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>*  value) ;

constexpr void __cordl_internal_set_OnNewNotefieldCreated(::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  value) ;

constexpr void __cordl_internal_set_OnNewNotefieldData(::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  value) ;

constexpr void __cordl_internal_set__NoteFieldData_k__BackingField(::VROSC::NoteFieldData*  value) ;

constexpr void __cordl_internal_set__blinkCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__hoveredNoteBoardNotes(::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>*  value) ;

constexpr void __cordl_internal_set__noteBoardNotes(::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*  value) ;

constexpr void __cordl_internal_set__noteFieldPrefab(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__noteFieldSettings(::UnityW<::VROSC::NotefieldColorSettings>  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::VROSC::NotefieldAnimationSettings>  value) ;

constexpr void __cordl_internal_set__size(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x17b3750, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NoteBoardNoteList, addr 0x17b4e1c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>* get_NoteBoardNoteList() ;

/// @brief Method get_NoteFieldData, addr 0x17b4e14, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldData* get_NoteFieldData() ;

/// @brief Method get_Settings, addr 0x17b4e24, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NotefieldAnimationSettings> get_Settings() ;

/// @brief Method set_NoteFieldData, addr 0x17b4e0c, size 0x8, virtual false, abstract: false, final false
inline void set_NoteFieldData(::VROSC::NoteFieldData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteController(NoteBoardNoteController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteController(NoteBoardNoteController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1448};

/// @brief Field _noteFieldPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____noteFieldPrefab;

/// @brief Field _size, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____size;

/// @brief Field _settings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::NotefieldAnimationSettings>  ____settings;

/// @brief Field _noteFieldSettings, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::NotefieldColorSettings>  ____noteFieldSettings;

/// @brief Field <NoteFieldData>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::VROSC::NoteFieldData*  ____NoteFieldData_k__BackingField;

/// @brief Field _noteBoardNotes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::NoteBoardNote>>*  ____noteBoardNotes;

/// @brief Field OnHover, offset: 0x58, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::VROSC::InputDevice>,::VROSC::NoteFieldNoteData*,bool>*  ___OnHover;

/// @brief Field OnNewNotefieldData, offset: 0x60, size: 0x8, def value: None
 ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  ___OnNewNotefieldData;

/// @brief Field OnNewNotefieldCreated, offset: 0x68, size: 0x8, def value: None
 ::System::Action_2<::VROSC::NoteFieldData*,::VROSC::NoteFieldParameters*>*  ___OnNewNotefieldCreated;

/// @brief Field _blinkCoroutine, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____blinkCoroutine;

/// @brief Field _hoveredNoteBoardNotes, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*>*  ____hoveredNoteBoardNotes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteController, ____noteFieldPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ____size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ____settings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ____noteFieldSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ____NoteFieldData_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ____noteBoardNotes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ___OnHover) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ___OnNewNotefieldData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ___OnNewNotefieldCreated) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ____blinkCoroutine) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteController, ____hoveredNoteBoardNotes) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteController, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardNoteController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteController*, "VROSC", "NoteBoardNoteController");
NEED_NO_BOX(::VROSC::NoteBoardNoteController_HoveredNoteBoardNote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteController_HoveredNoteBoardNote*, "VROSC", "NoteBoardNoteController/HoveredNoteBoardNote");
NEED_NO_BOX(::VROSC::NoteBoardNoteController__BlinkNotes_d__28);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteController__BlinkNotes_d__28*, "VROSC", "NoteBoardNoteController/<BlinkNotes>d__28");
