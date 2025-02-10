#pragma once
// IWYU pragma private; include "GlobalNamespace/PunchKeyboardInputField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PunchKeyboardInputField)
namespace GlobalNamespace {
class Key;
}
namespace GlobalNamespace {
class PunchKeyboardInputField__UpdateCursorPosition_d__15;
}
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
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PunchKeyboardInputField;
}
namespace GlobalNamespace {
class PunchKeyboardInputField__UpdateCursorPosition_d__15;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PunchKeyboardInputField);
MARK_REF_PTR_T(::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunchKeyboardInputField/<UpdateCursorPosition>d__15
class CORDL_TYPE PunchKeyboardInputField__UpdateCursorPosition_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PunchKeyboardInputField>  __4__this;

/// @brief Field <newPosition>5__2, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__newPosition_5__2, put=__cordl_internal_set__newPosition_5__2)) ::UnityEngine::Vector3  _newPosition_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16b9e4c, size 0x114, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16b9f60, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16b9f68, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16b9fa0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16b9e48, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboardInputField> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboardInputField>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__newPosition_5__2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__newPosition_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PunchKeyboardInputField>  value) ;

constexpr void __cordl_internal_set__newPosition_5__2(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x16b9adc, size 0x28, virtual false, abstract: false, final false
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
constexpr PunchKeyboardInputField__UpdateCursorPosition_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboardInputField__UpdateCursorPosition_d__15", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PunchKeyboardInputField__UpdateCursorPosition_d__15(PunchKeyboardInputField__UpdateCursorPosition_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboardInputField__UpdateCursorPosition_d__15", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunchKeyboardInputField__UpdateCursorPosition_d__15(PunchKeyboardInputField__UpdateCursorPosition_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PunchKeyboardInputField>  _____4__this;

/// @brief Field <newPosition>5__2, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____newPosition_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15, ____newPosition_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunchKeyboardInputField
class CORDL_TYPE PunchKeyboardInputField : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateCursorPosition_d__15 = ::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15;

/// @brief Field OnEnterPressed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnterPressed, put=__cordl_internal_set_OnEnterPressed)) ::System::Action*  OnEnterPressed;

 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

/// @brief Field _cursor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cursor, put=__cordl_internal_set__cursor)) ::UnityW<::UnityEngine::GameObject>  _cursor;

/// @brief Field _cursorOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__cursorOffset, put=__cordl_internal_set__cursorOffset)) float_t  _cursorOffset;

/// @brief Field _cursorStartPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__cursorStartPosition, put=__cordl_internal_set__cursorStartPosition)) ::UnityEngine::Vector3  _cursorStartPosition;

/// @brief Field _infoLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoLabel, put=__cordl_internal_set__infoLabel)) ::UnityW<::TMPro::TextMeshPro>  _infoLabel;

/// @brief Field _isMultiline, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMultiline, put=__cordl_internal_set__isMultiline)) bool  _isMultiline;

/// @brief Field _textField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__textField, put=__cordl_internal_set__textField)) ::UnityW<::TMPro::TextMeshPro>  _textField;

/// @brief Method Awake, addr 0x16b98a4, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BacksspacePressed, addr 0x16b9bb0, size 0xb0, virtual false, abstract: false, final false
inline void BacksspacePressed() ;

/// @brief Method ClearText, addr 0x16b94d8, size 0x48, virtual false, abstract: false, final false
inline void ClearText() ;

/// @brief Method EnterPressed, addr 0x16b9c60, size 0x9c, virtual false, abstract: false, final false
inline void EnterPressed() ;

/// @brief Method GetExternalKeyboardInput, addr 0x16b9d00, size 0x134, virtual false, abstract: false, final false
inline void GetExternalKeyboardInput() ;

/// @brief Method KeyPressed, addr 0x16b9b04, size 0xac, virtual false, abstract: false, final false
inline void KeyPressed(::GlobalNamespace::Key*  key) ;

static inline ::GlobalNamespace::PunchKeyboardInputField* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16b99e4, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x16b99c4, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Set, addr 0x16b893c, size 0x44, virtual false, abstract: false, final false
inline void Set(::StringW  startText, ::StringW  infoText, bool  multiline) ;

/// @brief Method Update, addr 0x16b9cfc, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCursorPosition, addr 0x16b9844, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateCursorPosition() ;

constexpr ::System::Action* const& __cordl_internal_get_OnEnterPressed() const;

constexpr ::System::Action*& __cordl_internal_get_OnEnterPressed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cursor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cursor() ;

constexpr float_t const& __cordl_internal_get__cursorOffset() const;

constexpr float_t& __cordl_internal_get__cursorOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cursorStartPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cursorStartPosition() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__infoLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__infoLabel() ;

constexpr bool const& __cordl_internal_get__isMultiline() const;

constexpr bool& __cordl_internal_get__isMultiline() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textField() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textField() ;

constexpr void __cordl_internal_set_OnEnterPressed(::System::Action*  value) ;

constexpr void __cordl_internal_set__cursor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__cursorOffset(float_t  value) ;

constexpr void __cordl_internal_set__cursorStartPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__infoLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__isMultiline(bool  value) ;

constexpr void __cordl_internal_set__textField(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x16b9e34, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Text, addr 0x16b9434, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

/// @brief Method set_Text, addr 0x16b97e0, size 0x64, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunchKeyboardInputField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboardInputField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PunchKeyboardInputField(PunchKeyboardInputField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyboardInputField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunchKeyboardInputField(PunchKeyboardInputField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12};

/// @brief Field _infoLabel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____infoLabel;

/// @brief Field _textField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textField;

/// @brief Field _cursor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cursor;

/// @brief Field _cursorOffset, offset: 0x38, size: 0x4, def value: None
 float_t  ____cursorOffset;

/// @brief Field _cursorStartPosition, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cursorStartPosition;

/// @brief Field OnEnterPressed, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnEnterPressed;

/// @brief Field _isMultiline, offset: 0x50, size: 0x1, def value: None
 bool  ____isMultiline;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField, ____infoLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField, ____textField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField, ____cursor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField, ____cursorOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField, ____cursorStartPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField, ___OnEnterPressed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyboardInputField, ____isMultiline) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PunchKeyboardInputField, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PunchKeyboardInputField);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyboardInputField*, "", "PunchKeyboardInputField");
NEED_NO_BOX(::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyboardInputField__UpdateCursorPosition_d__15*, "", "PunchKeyboardInputField/<UpdateCursorPosition>d__15");
