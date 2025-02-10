#pragma once
// IWYU pragma private; include "GlobalNamespace/PunchKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PunchKeyboard)
namespace GlobalNamespace {
class KeySoundController;
}
namespace GlobalNamespace {
class Key;
}
namespace GlobalNamespace {
class PunchKeyboardInputField;
}
namespace GlobalNamespace {
class PunchKeyboard_HitKey;
}
namespace GlobalNamespace {
class PunchKeyboard__Animate_d__42;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class ObjectActivation;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace GlobalNamespace {
class PunchKeyboard;
}
namespace GlobalNamespace {
class PunchKeyboard_HitKey;
}
namespace GlobalNamespace {
class PunchKeyboard__Animate_d__42;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PunchKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::PunchKeyboard_HitKey);
MARK_REF_PTR_T(::GlobalNamespace::PunchKeyboard__Animate_d__42);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunchKeyboard/HitKey
class CORDL_TYPE PunchKeyboard_HitKey : public ::System::Object {
public:
// Declarations
/// @brief Field Key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::UnityW<::GlobalNamespace::Key>  Key;

/// @brief Field Strength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Strength, put=__cordl_internal_set_Strength)) float_t  Strength;

static inline ::GlobalNamespace::PunchKeyboard_HitKey* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::Key> const& __cordl_internal_get_Key() const;

constexpr ::UnityW<::GlobalNamespace::Key>& __cordl_internal_get_Key() ;

constexpr float_t const& __cordl_internal_get_Strength() const;

constexpr float_t& __cordl_internal_get_Strength() ;

constexpr void __cordl_internal_set_Key(::UnityW<::GlobalNamespace::Key>  value) ;

constexpr void __cordl_internal_set_Strength(float_t  value) ;

/// @brief Method .ctor, addr 0x16b9274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunchKeyboard_HitKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboard_HitKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PunchKeyboard_HitKey(PunchKeyboard_HitKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboard_HitKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunchKeyboard_HitKey(PunchKeyboard_HitKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8};

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Key>  ___Key;

/// @brief Field Strength, offset: 0x18, size: 0x4, def value: None
 float_t  ___Strength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunchKeyboard_HitKey, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard_HitKey, ___Strength) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PunchKeyboard_HitKey, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunchKeyboard/<Animate>d__42
class CORDL_TYPE PunchKeyboard__Animate_d__42 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PunchKeyboard>  __4__this;

/// @brief Field <t>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__t_5__2, put=__cordl_internal_set__t_5__2)) float_t  _t_5__2;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Field open, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_open, put=__cordl_internal_set_open)) bool  open;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16b9634, size 0x164, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::PunchKeyboard__Animate_d__42* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16b9798, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16b97a0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16b97d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16b9630, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboard> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboard>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__t_5__2() const;

constexpr float_t& __cordl_internal_get__t_5__2() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr bool const& __cordl_internal_get_open() const;

constexpr bool& __cordl_internal_get_open() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PunchKeyboard>  value) ;

constexpr void __cordl_internal_set__t_5__2(float_t  value) ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_open(bool  value) ;

/// @brief Method .ctor, addr 0x16b9520, size 0x28, virtual false, abstract: false, final false
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
constexpr PunchKeyboard__Animate_d__42() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboard__Animate_d__42", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PunchKeyboard__Animate_d__42(PunchKeyboard__Animate_d__42 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboard__Animate_d__42", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunchKeyboard__Animate_d__42(PunchKeyboard__Animate_d__42 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field open, offset: 0x20, size: 0x1, def value: None
 bool  ___open;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PunchKeyboard>  _____4__this;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___callback;

/// @brief Field <t>5__2, offset: 0x38, size: 0x4, def value: None
 float_t  ____t_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunchKeyboard__Animate_d__42, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard__Animate_d__42, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard__Animate_d__42, ___open) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard__Animate_d__42, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard__Animate_d__42, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard__Animate_d__42, ____t_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PunchKeyboard__Animate_d__42, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunchKeyboard
class CORDL_TYPE PunchKeyboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HitKey = ::GlobalNamespace::PunchKeyboard_HitKey;

using _Animate_d__42 = ::GlobalNamespace::PunchKeyboard__Animate_d__42;

/// @brief Field IsSymbol, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsSymbol, put=setStaticF_IsSymbol)) bool  IsSymbol;

/// @brief Field IsUppercase, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsUppercase, put=setStaticF_IsUppercase)) bool  IsUppercase;

/// @brief Field OnClearButtonPressed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnClearButtonPressed, put=setStaticF_OnClearButtonPressed)) ::System::Action*  OnClearButtonPressed;

/// @brief Field OnClosed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnClosed, put=setStaticF_OnClosed)) ::System::Action*  OnClosed;

/// @brief Field OnKeyPressed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnKeyPressed, put=setStaticF_OnKeyPressed)) ::System::Action_1<::UnityW<::GlobalNamespace::Key>>*  OnKeyPressed;

/// @brief Field OnTextChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTextChanged, put=setStaticF_OnTextChanged)) ::System::Action_1<::StringW>*  OnTextChanged;

/// @brief Field OnTextSubmitted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTextSubmitted, put=setStaticF_OnTextSubmitted)) ::System::Action_1<::StringW>*  OnTextSubmitted;

/// @brief Field OnToggled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnToggled, put=setStaticF_OnToggled)) ::System::Action_1<bool>*  OnToggled;

/// @brief Field _clearButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__clearButton, put=__cordl_internal_set__clearButton)) ::UnityW<::VROSC::UIButton>  _clearButton;

/// @brief Field _closeAnimationDuration, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__closeAnimationDuration, put=__cordl_internal_set__closeAnimationDuration)) float_t  _closeAnimationDuration;

/// @brief Field _closeButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _controlPanelHolder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__controlPanelHolder, put=__cordl_internal_set__controlPanelHolder)) ::UnityW<::UnityEngine::GameObject>  _controlPanelHolder;

/// @brief Field _filterTimer, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__filterTimer, put=__cordl_internal_set__filterTimer)) float_t  _filterTimer;

/// @brief Field _hasSubmitted, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasSubmitted, put=__cordl_internal_set__hasSubmitted)) bool  _hasSubmitted;

/// @brief Field _hitKeys, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitKeys, put=__cordl_internal_set__hitKeys)) ::System::Collections::Generic::List_1<::GlobalNamespace::PunchKeyboard_HitKey*>*  _hitKeys;

/// @brief Field _instantSubmit, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__instantSubmit, put=__cordl_internal_set__instantSubmit)) bool  _instantSubmit;

/// @brief Field _isActive, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _isMultiline, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMultiline, put=__cordl_internal_set__isMultiline)) bool  _isMultiline;

/// @brief Field _keySoundController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__keySoundController, put=__cordl_internal_set__keySoundController)) ::UnityW<::GlobalNamespace::KeySoundController>  _keySoundController;

/// @brief Field _keys, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__keys, put=__cordl_internal_set__keys)) ::ArrayW<::UnityW<::GlobalNamespace::Key>,::Array<::UnityW<::GlobalNamespace::Key>>*>  _keys;

/// @brief Field _objectActivation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectActivation, put=__cordl_internal_set__objectActivation)) ::UnityW<::VROSC::ObjectActivation>  _objectActivation;

/// @brief Field _openAnimationDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__openAnimationDuration, put=__cordl_internal_set__openAnimationDuration)) float_t  _openAnimationDuration;

/// @brief Field _previewInputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewInputField, put=__cordl_internal_set__previewInputField)) ::UnityW<::GlobalNamespace::PunchKeyboardInputField>  _previewInputField;

/// @brief Field _simultaneousKeyPressFilterDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__simultaneousKeyPressFilterDuration, put=__cordl_internal_set__simultaneousKeyPressFilterDuration)) float_t  _simultaneousKeyPressFilterDuration;

/// @brief Method Animate, addr 0x16b8dfc, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Animate(bool  open, ::System::Action*  callback) ;

/// @brief Method Awake, addr 0x16b8204, size 0x2c4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearButtonPressed, addr 0x16b9458, size 0x80, virtual false, abstract: false, final false
inline void ClearButtonPressed() ;

/// @brief Method CloseButtonPressed, addr 0x16b9330, size 0x70, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

/// @brief Method EnterPressed, addr 0x16b9320, size 0x10, virtual false, abstract: false, final false
inline void EnterPressed() ;

/// @brief Method KeyHit, addr 0x16b917c, size 0xf8, virtual false, abstract: false, final false
inline void KeyHit(::GlobalNamespace::Key*  hitKey, float_t  strength) ;

/// @brief Method MoveToFront, addr 0x16b8af0, size 0x18c, virtual false, abstract: false, final false
inline void MoveToFront() ;

static inline ::GlobalNamespace::PunchKeyboard* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16b84c8, size 0x278, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PressKey, addr 0x16b8fcc, size 0x1b0, virtual false, abstract: false, final false
inline void PressKey(::GlobalNamespace::Key*  pressedKey) ;

/// @brief Method Release, addr 0x16b8c7c, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Request, addr 0x16b879c, size 0x1a0, virtual false, abstract: false, final false
inline void Request(::StringW  startText, ::StringW  infoText, bool  multiline, bool  secret, bool  instantSubmit, bool  hideControlPanel) ;

/// @brief Method RequestWebKeyboard, addr 0x16b8740, size 0x5c, virtual false, abstract: false, final false
inline void RequestWebKeyboard() ;

/// @brief Method SetKeyHittersActive, addr 0x16b8c8c, size 0x170, virtual false, abstract: false, final false
inline void SetKeyHittersActive(bool  active) ;

/// @brief Method SubmitText, addr 0x16b93a0, size 0x94, virtual false, abstract: false, final false
inline void SubmitText() ;

/// @brief Method TextChanged, addr 0x16b927c, size 0xa4, virtual false, abstract: false, final false
inline void TextChanged() ;

/// @brief Method Toggle, addr 0x16b8980, size 0x170, virtual false, abstract: false, final false
inline void Toggle() ;

/// @brief Method Update, addr 0x16b8e74, size 0x158, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <Toggle>b__31_0, addr 0x16b9608, size 0x28, virtual false, abstract: false, final false
inline void _Toggle_b__31_0() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__clearButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__clearButton() ;

constexpr float_t const& __cordl_internal_get__closeAnimationDuration() const;

constexpr float_t& __cordl_internal_get__closeAnimationDuration() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__controlPanelHolder() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__controlPanelHolder() ;

constexpr float_t const& __cordl_internal_get__filterTimer() const;

constexpr float_t& __cordl_internal_get__filterTimer() ;

constexpr bool const& __cordl_internal_get__hasSubmitted() const;

constexpr bool& __cordl_internal_get__hasSubmitted() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PunchKeyboard_HitKey*>* const& __cordl_internal_get__hitKeys() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PunchKeyboard_HitKey*>*& __cordl_internal_get__hitKeys() ;

constexpr bool const& __cordl_internal_get__instantSubmit() const;

constexpr bool& __cordl_internal_get__instantSubmit() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr bool const& __cordl_internal_get__isMultiline() const;

constexpr bool& __cordl_internal_get__isMultiline() ;

constexpr ::UnityW<::GlobalNamespace::KeySoundController> const& __cordl_internal_get__keySoundController() const;

constexpr ::UnityW<::GlobalNamespace::KeySoundController>& __cordl_internal_get__keySoundController() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Key>,::Array<::UnityW<::GlobalNamespace::Key>>*> const& __cordl_internal_get__keys() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Key>,::Array<::UnityW<::GlobalNamespace::Key>>*>& __cordl_internal_get__keys() ;

constexpr ::UnityW<::VROSC::ObjectActivation> const& __cordl_internal_get__objectActivation() const;

constexpr ::UnityW<::VROSC::ObjectActivation>& __cordl_internal_get__objectActivation() ;

constexpr float_t const& __cordl_internal_get__openAnimationDuration() const;

constexpr float_t& __cordl_internal_get__openAnimationDuration() ;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboardInputField> const& __cordl_internal_get__previewInputField() const;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboardInputField>& __cordl_internal_get__previewInputField() ;

constexpr float_t const& __cordl_internal_get__simultaneousKeyPressFilterDuration() const;

constexpr float_t& __cordl_internal_get__simultaneousKeyPressFilterDuration() ;

constexpr void __cordl_internal_set__clearButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__closeAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__controlPanelHolder(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__filterTimer(float_t  value) ;

constexpr void __cordl_internal_set__hasSubmitted(bool  value) ;

constexpr void __cordl_internal_set__hitKeys(::System::Collections::Generic::List_1<::GlobalNamespace::PunchKeyboard_HitKey*>*  value) ;

constexpr void __cordl_internal_set__instantSubmit(bool  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__isMultiline(bool  value) ;

constexpr void __cordl_internal_set__keySoundController(::UnityW<::GlobalNamespace::KeySoundController>  value) ;

constexpr void __cordl_internal_set__keys(::ArrayW<::UnityW<::GlobalNamespace::Key>,::Array<::UnityW<::GlobalNamespace::Key>>*>  value) ;

constexpr void __cordl_internal_set__objectActivation(::UnityW<::VROSC::ObjectActivation>  value) ;

constexpr void __cordl_internal_set__openAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set__previewInputField(::UnityW<::GlobalNamespace::PunchKeyboardInputField>  value) ;

constexpr void __cordl_internal_set__simultaneousKeyPressFilterDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x16b9548, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_IsSymbol() ;

static inline bool getStaticF_IsUppercase() ;

static inline ::System::Action* getStaticF_OnClearButtonPressed() ;

static inline ::System::Action* getStaticF_OnClosed() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::Key>>* getStaticF_OnKeyPressed() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnTextChanged() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnTextSubmitted() ;

static inline ::System::Action_1<bool>* getStaticF_OnToggled() ;

static inline void setStaticF_IsSymbol(bool  value) ;

static inline void setStaticF_IsUppercase(bool  value) ;

static inline void setStaticF_OnClearButtonPressed(::System::Action*  value) ;

static inline void setStaticF_OnClosed(::System::Action*  value) ;

static inline void setStaticF_OnKeyPressed(::System::Action_1<::UnityW<::GlobalNamespace::Key>>*  value) ;

static inline void setStaticF_OnTextChanged(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnTextSubmitted(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnToggled(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunchKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PunchKeyboard(PunchKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunchKeyboard(PunchKeyboard const& ) = delete;

/// @brief Field KeyboardLayerName offset 0xffffffff size 0x8
static constexpr ::ConstString  KeyboardLayerName{u"Keyboard"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10};

/// @brief Field _previewInputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PunchKeyboardInputField>  ____previewInputField;

/// @brief Field _keySoundController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KeySoundController>  ____keySoundController;

/// @brief Field _simultaneousKeyPressFilterDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ____simultaneousKeyPressFilterDuration;

/// @brief Field _closeButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _clearButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____clearButton;

/// @brief Field _objectActivation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::ObjectActivation>  ____objectActivation;

/// @brief Field _openAnimationDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ____openAnimationDuration;

/// @brief Field _closeAnimationDuration, offset: 0x54, size: 0x4, def value: None
 float_t  ____closeAnimationDuration;

/// @brief Field _controlPanelHolder, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____controlPanelHolder;

/// @brief Field _keys, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::Key>,::Array<::UnityW<::GlobalNamespace::Key>>*>  ____keys;

/// @brief Field _hitKeys, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PunchKeyboard_HitKey*>*  ____hitKeys;

/// @brief Field _isActive, offset: 0x70, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _filterTimer, offset: 0x74, size: 0x4, def value: None
 float_t  ____filterTimer;

/// @brief Field _hasSubmitted, offset: 0x78, size: 0x1, def value: None
 bool  ____hasSubmitted;

/// @brief Field _isMultiline, offset: 0x79, size: 0x1, def value: None
 bool  ____isMultiline;

/// @brief Field _instantSubmit, offset: 0x7a, size: 0x1, def value: None
 bool  ____instantSubmit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____previewInputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____keySoundController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____simultaneousKeyPressFilterDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____closeButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____clearButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____objectActivation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____openAnimationDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____closeAnimationDuration) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____controlPanelHolder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____keys) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____hitKeys) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____isActive) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____filterTimer) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____hasSubmitted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____isMultiline) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboard, ____instantSubmit) == 0x7a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PunchKeyboard, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PunchKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyboard*, "", "PunchKeyboard");
NEED_NO_BOX(::GlobalNamespace::PunchKeyboard_HitKey);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyboard_HitKey*, "", "PunchKeyboard/HitKey");
NEED_NO_BOX(::GlobalNamespace::PunchKeyboard__Animate_d__42);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyboard__Animate_d__42*, "", "PunchKeyboard/<Animate>d__42");
