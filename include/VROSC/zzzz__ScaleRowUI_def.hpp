#pragma once
// IWYU pragma private; include "VROSC/ScaleRowUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleRowUI)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
namespace VROSC {
class NoteNode;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScaleNode;
}
namespace VROSC {
class ScaleNoteButtonUI;
}
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
class ScaleRowUI__OnEnableCoroutine_d__24;
}
namespace VROSC {
struct Scale;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class ScaleRowUI;
}
namespace VROSC {
class ScaleRowUI__OnEnableCoroutine_d__24;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScaleRowUI);
MARK_REF_PTR_T(::VROSC::ScaleRowUI__OnEnableCoroutine_d__24);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleRowUI/<OnEnableCoroutine>d__24
class CORDL_TYPE ScaleRowUI__OnEnableCoroutine_d__24 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::ScaleRowUI>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1798f94, size 0x94, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::ScaleRowUI__OnEnableCoroutine_d__24* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1799028, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1799030, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1799068, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1798f90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::ScaleRowUI> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::ScaleRowUI>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::ScaleRowUI>  value) ;

/// @brief Method .ctor, addr 0x17989e4, size 0x28, virtual false, abstract: false, final false
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
constexpr ScaleRowUI__OnEnableCoroutine_d__24() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleRowUI__OnEnableCoroutine_d__24", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleRowUI__OnEnableCoroutine_d__24(ScaleRowUI__OnEnableCoroutine_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleRowUI__OnEnableCoroutine_d__24", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleRowUI__OnEnableCoroutine_d__24(ScaleRowUI__OnEnableCoroutine_d__24 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1354};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleRowUI>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleRowUI__OnEnableCoroutine_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI__OnEnableCoroutine_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI__OnEnableCoroutine_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleRowUI__OnEnableCoroutine_d__24, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.Note, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleRowUI
class CORDL_TYPE ScaleRowUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnEnableCoroutine_d__24 = ::VROSC::ScaleRowUI__OnEnableCoroutine_d__24;

/// @brief Field OnNotesUpdated, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNotesUpdated, put=__cordl_internal_set_OnNotesUpdated)) ::System::Action_2<int32_t,::VROSC::Scale>*  OnNotesUpdated;

/// @brief Field _customized, offset 0x76, size 0x1 
 __declspec(property(get=__cordl_internal_get__customized, put=__cordl_internal_set__customized)) bool  _customized;

/// @brief Field _initGlobalKey, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__initGlobalKey, put=__cordl_internal_set__initGlobalKey)) ::VROSC::Note  _initGlobalKey;

/// @brief Field _initGlobalScalePreset, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__initGlobalScalePreset, put=__cordl_internal_set__initGlobalScalePreset)) ::VROSC::ScalePreset*  _initGlobalScalePreset;

/// @brief Field _initNoteCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__initNoteCount, put=__cordl_internal_set__initNoteCount)) int32_t  _initNoteCount;

/// @brief Field _initScale, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__initScale, put=__cordl_internal_set__initScale)) ::VROSC::Scale  _initScale;

/// @brief Field _initStartNoteOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__initStartNoteOffset, put=__cordl_internal_set__initStartNoteOffset)) int32_t  _initStartNoteOffset;

/// @brief Field _instrumentController, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::SynthController>  _instrumentController;

/// @brief Field _isInitiated, offset 0x77, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitiated, put=__cordl_internal_set__isInitiated)) bool  _isInitiated;

/// @brief Field _lastGlobalKey, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastGlobalKey, put=__cordl_internal_set__lastGlobalKey)) ::VROSC::Note  _lastGlobalKey;

/// @brief Field _lastGlobalScalePreset, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastGlobalScalePreset, put=__cordl_internal_set__lastGlobalScalePreset)) ::VROSC::ScalePreset*  _lastGlobalScalePreset;

/// @brief Field _locked, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get__locked, put=__cordl_internal_set__locked)) bool  _locked;

/// @brief Field _notebuttons, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__notebuttons, put=__cordl_internal_set__notebuttons)) ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>  _notebuttons;

/// @brief Field _overrideScaleDefaults, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__overrideScaleDefaults, put=__cordl_internal_set__overrideScaleDefaults)) bool  _overrideScaleDefaults;

/// @brief Field _resetButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetButton, put=__cordl_internal_set__resetButton)) ::UnityW<::VROSC::UIButton>  _resetButton;

/// @brief Field _scaleNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleNode, put=__cordl_internal_set__scaleNode)) ::UnityW<::VROSC::ScaleNode>  _scaleNode;

/// @brief Field _scaleRowIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleRowIndex, put=__cordl_internal_set__scaleRowIndex)) int32_t  _scaleRowIndex;

/// @brief Field _startNoteNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__startNoteNode, put=__cordl_internal_set__startNoteNode)) ::UnityW<::VROSC::NoteNode>  _startNoteNode;

/// @brief Method CustomizedChanged, addr 0x17982b0, size 0x80, virtual false, abstract: false, final false
inline void CustomizedChanged(bool  saveData) ;

/// @brief Method GetAllScaleNoteButtonsInChildren, addr 0x1798f38, size 0x50, virtual false, abstract: false, final false
inline void GetAllScaleNoteButtonsInChildren() ;

/// @brief Method GlobalScaleChanged, addr 0x1798568, size 0x2e0, virtual false, abstract: false, final false
inline void GlobalScaleChanged(::VROSC::ScalePreset*  globalScalePreset, ::VROSC::Note  globalKey) ;

static inline ::VROSC::ScaleRowUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1798bb4, size 0x384, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1798900, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnableCoroutine, addr 0x1798984, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OnEnableCoroutine() ;

/// @brief Method ResetToCurrentScaleButtonPressed, addr 0x1798848, size 0x7c, virtual false, abstract: false, final false
inline void ResetToCurrentScaleButtonPressed() ;

/// @brief Method SetLocked, addr 0x17988c4, size 0x3c, virtual false, abstract: false, final false
inline void SetLocked(bool  locked) ;

/// @brief Method SetScaleNoteActive, addr 0x1798b14, size 0xa0, virtual false, abstract: false, final false
inline void SetScaleNoteActive(::VROSC::Note  note, bool  active) ;

/// @brief Method Setup, addr 0x1797dcc, size 0x4e4, virtual false, abstract: false, final false
inline void Setup(::VROSC::ScalePreset*  globalScale, ::VROSC::Note  globalKey, ::VROSC::Scale  scale, int32_t  startNoteOffset, bool  overrideScaleDefaults, ::VROSC::SynthController*  instrumentController, int32_t  scaleRowIndex) ;

/// @brief Method StartNoteAssigned, addr 0x1798a0c, size 0x108, virtual false, abstract: false, final false
inline void StartNoteAssigned(::VROSC::Note  note) ;

/// @brief Method UpdateButtons, addr 0x1798330, size 0xa8, virtual false, abstract: false, final false
inline void UpdateButtons() ;

/// @brief Method UserDataLoaded, addr 0x17983d8, size 0x190, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::System::Action_2<int32_t,::VROSC::Scale>* const& __cordl_internal_get_OnNotesUpdated() const;

constexpr ::System::Action_2<int32_t,::VROSC::Scale>*& __cordl_internal_get_OnNotesUpdated() ;

constexpr bool const& __cordl_internal_get__customized() const;

constexpr bool& __cordl_internal_get__customized() ;

constexpr ::VROSC::Note const& __cordl_internal_get__initGlobalKey() const;

constexpr ::VROSC::Note& __cordl_internal_get__initGlobalKey() ;

constexpr ::VROSC::ScalePreset* const& __cordl_internal_get__initGlobalScalePreset() const;

constexpr ::VROSC::ScalePreset*& __cordl_internal_get__initGlobalScalePreset() ;

constexpr int32_t const& __cordl_internal_get__initNoteCount() const;

constexpr int32_t& __cordl_internal_get__initNoteCount() ;

constexpr ::VROSC::Scale const& __cordl_internal_get__initScale() const;

constexpr ::VROSC::Scale& __cordl_internal_get__initScale() ;

constexpr int32_t const& __cordl_internal_get__initStartNoteOffset() const;

constexpr int32_t& __cordl_internal_get__initStartNoteOffset() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__instrumentController() ;

constexpr bool const& __cordl_internal_get__isInitiated() const;

constexpr bool& __cordl_internal_get__isInitiated() ;

constexpr ::VROSC::Note const& __cordl_internal_get__lastGlobalKey() const;

constexpr ::VROSC::Note& __cordl_internal_get__lastGlobalKey() ;

constexpr ::VROSC::ScalePreset* const& __cordl_internal_get__lastGlobalScalePreset() const;

constexpr ::VROSC::ScalePreset*& __cordl_internal_get__lastGlobalScalePreset() ;

constexpr bool const& __cordl_internal_get__locked() const;

constexpr bool& __cordl_internal_get__locked() ;

constexpr ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*> const& __cordl_internal_get__notebuttons() const;

constexpr ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>& __cordl_internal_get__notebuttons() ;

constexpr bool const& __cordl_internal_get__overrideScaleDefaults() const;

constexpr bool& __cordl_internal_get__overrideScaleDefaults() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetButton() ;

constexpr ::UnityW<::VROSC::ScaleNode> const& __cordl_internal_get__scaleNode() const;

constexpr ::UnityW<::VROSC::ScaleNode>& __cordl_internal_get__scaleNode() ;

constexpr int32_t const& __cordl_internal_get__scaleRowIndex() const;

constexpr int32_t& __cordl_internal_get__scaleRowIndex() ;

constexpr ::UnityW<::VROSC::NoteNode> const& __cordl_internal_get__startNoteNode() const;

constexpr ::UnityW<::VROSC::NoteNode>& __cordl_internal_get__startNoteNode() ;

constexpr void __cordl_internal_set_OnNotesUpdated(::System::Action_2<int32_t,::VROSC::Scale>*  value) ;

constexpr void __cordl_internal_set__customized(bool  value) ;

constexpr void __cordl_internal_set__initGlobalKey(::VROSC::Note  value) ;

constexpr void __cordl_internal_set__initGlobalScalePreset(::VROSC::ScalePreset*  value) ;

constexpr void __cordl_internal_set__initNoteCount(int32_t  value) ;

constexpr void __cordl_internal_set__initScale(::VROSC::Scale  value) ;

constexpr void __cordl_internal_set__initStartNoteOffset(int32_t  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__isInitiated(bool  value) ;

constexpr void __cordl_internal_set__lastGlobalKey(::VROSC::Note  value) ;

constexpr void __cordl_internal_set__lastGlobalScalePreset(::VROSC::ScalePreset*  value) ;

constexpr void __cordl_internal_set__locked(bool  value) ;

constexpr void __cordl_internal_set__notebuttons(::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>  value) ;

constexpr void __cordl_internal_set__overrideScaleDefaults(bool  value) ;

constexpr void __cordl_internal_set__resetButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__scaleNode(::UnityW<::VROSC::ScaleNode>  value) ;

constexpr void __cordl_internal_set__scaleRowIndex(int32_t  value) ;

constexpr void __cordl_internal_set__startNoteNode(::UnityW<::VROSC::NoteNode>  value) ;

/// @brief Method .ctor, addr 0x1798f88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleRowUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleRowUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleRowUI(ScaleRowUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleRowUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleRowUI(ScaleRowUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1355};

/// @brief Field _startNoteNode, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteNode>  ____startNoteNode;

/// @brief Field _scaleNode, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleNode>  ____scaleNode;

/// @brief Field _resetButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetButton;

/// @brief Field _notebuttons, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>  ____notebuttons;

/// @brief Field _instrumentController, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____instrumentController;

/// @brief Field _scaleRowIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ____scaleRowIndex;

/// @brief Field _initScale, offset: 0x4c, size: 0x4, def value: None
 ::VROSC::Scale  ____initScale;

/// @brief Field _initGlobalScalePreset, offset: 0x50, size: 0x8, def value: None
 ::VROSC::ScalePreset*  ____initGlobalScalePreset;

/// @brief Field _initStartNoteOffset, offset: 0x58, size: 0x4, def value: None
 int32_t  ____initStartNoteOffset;

/// @brief Field _initGlobalKey, offset: 0x5c, size: 0x4, def value: None
 ::VROSC::Note  ____initGlobalKey;

/// @brief Field _initNoteCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ____initNoteCount;

/// @brief Field _lastGlobalScalePreset, offset: 0x68, size: 0x8, def value: None
 ::VROSC::ScalePreset*  ____lastGlobalScalePreset;

/// @brief Field _lastGlobalKey, offset: 0x70, size: 0x4, def value: None
 ::VROSC::Note  ____lastGlobalKey;

/// @brief Field _overrideScaleDefaults, offset: 0x74, size: 0x1, def value: None
 bool  ____overrideScaleDefaults;

/// @brief Field _locked, offset: 0x75, size: 0x1, def value: None
 bool  ____locked;

/// @brief Field _customized, offset: 0x76, size: 0x1, def value: None
 bool  ____customized;

/// @brief Field _isInitiated, offset: 0x77, size: 0x1, def value: None
 bool  ____isInitiated;

/// @brief Field OnNotesUpdated, offset: 0x78, size: 0x8, def value: None
 ::System::Action_2<int32_t,::VROSC::Scale>*  ___OnNotesUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleRowUI, ____startNoteNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____scaleNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____resetButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____notebuttons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____instrumentController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____scaleRowIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____initScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____initGlobalScalePreset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____initStartNoteOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____initGlobalKey) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____initNoteCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____lastGlobalScalePreset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____lastGlobalKey) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____overrideScaleDefaults) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____locked) == 0x75, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____customized) == 0x76, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ____isInitiated) == 0x77, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRowUI, ___OnNotesUpdated) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleRowUI, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScaleRowUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleRowUI*, "VROSC", "ScaleRowUI");
NEED_NO_BOX(::VROSC::ScaleRowUI__OnEnableCoroutine_d__24);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleRowUI__OnEnableCoroutine_d__24*, "VROSC", "ScaleRowUI/<OnEnableCoroutine>d__24");
