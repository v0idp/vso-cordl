#pragma once
// IWYU pragma private; include "GlobalNamespace/TextFieldBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextFieldBehaviour)
namespace GlobalNamespace {
class NGramGenerator;
}
namespace GlobalNamespace {
class TextFieldBehaviour__DisableHighlight_d__5;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::UI {
class InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class TextFieldBehaviour;
}
namespace GlobalNamespace {
class TextFieldBehaviour__DisableHighlight_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextFieldBehaviour);
MARK_REF_PTR_T(::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextFieldBehaviour/<DisableHighlight>d__5
class CORDL_TYPE TextFieldBehaviour__DisableHighlight_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TextFieldBehaviour>  __4__this;

/// @brief Field <originalTextColor>5__2, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__originalTextColor_5__2, put=__cordl_internal_set__originalTextColor_5__2)) ::UnityEngine::Color  _originalTextColor_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16be3c0, size 0xe4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16be4a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16be4ac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16be4e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16be3bc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TextFieldBehaviour> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TextFieldBehaviour>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__originalTextColor_5__2() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__originalTextColor_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TextFieldBehaviour>  value) ;

constexpr void __cordl_internal_set__originalTextColor_5__2(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x16be2e8, size 0x28, virtual false, abstract: false, final false
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
constexpr TextFieldBehaviour__DisableHighlight_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextFieldBehaviour__DisableHighlight_d__5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextFieldBehaviour__DisableHighlight_d__5(TextFieldBehaviour__DisableHighlight_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextFieldBehaviour__DisableHighlight_d__5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextFieldBehaviour__DisableHighlight_d__5(TextFieldBehaviour__DisableHighlight_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextFieldBehaviour>  _____4__this;

/// @brief Field <originalTextColor>5__2, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____originalTextColor_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5, ____originalTextColor_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.ISelectHandler, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextFieldBehaviour
class CORDL_TYPE TextFieldBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DisableHighlight_d__5 = ::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5;

/// @brief Field NGramHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NGramHandler, put=__cordl_internal_set_NGramHandler)) ::UnityW<::GlobalNamespace::NGramGenerator>  NGramHandler;

/// @brief Field inputField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputField, put=__cordl_internal_set_inputField)) ::UnityW<::UnityEngine::UI::InputField>  inputField;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Method DisableHighlight, addr 0x16be268, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DisableHighlight() ;

/// @brief Method MoveCaretToEnd, addr 0x16be2c8, size 0x20, virtual false, abstract: false, final false
inline void MoveCaretToEnd() ;

static inline ::GlobalNamespace::TextFieldBehaviour* New_ctor() ;

/// @brief Method OnSelect, addr 0x16be248, size 0x20, virtual true, abstract: false, final true
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method Start, addr 0x16be1e8, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x16be310, size 0xa4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::NGramGenerator> const& __cordl_internal_get_NGramHandler() const;

constexpr ::UnityW<::GlobalNamespace::NGramGenerator>& __cordl_internal_get_NGramHandler() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_inputField() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_inputField() ;

constexpr void __cordl_internal_set_NGramHandler(::UnityW<::GlobalNamespace::NGramGenerator>  value) ;

constexpr void __cordl_internal_set_inputField(::UnityW<::UnityEngine::UI::InputField>  value) ;

/// @brief Method .ctor, addr 0x16be3b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextFieldBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextFieldBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextFieldBehaviour(TextFieldBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextFieldBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextFieldBehaviour(TextFieldBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26};

/// @brief Field NGramHandler, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NGramGenerator>  ___NGramHandler;

/// @brief Field inputField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  ___inputField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextFieldBehaviour, ___NGramHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFieldBehaviour, ___inputField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextFieldBehaviour, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextFieldBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextFieldBehaviour*, "", "TextFieldBehaviour");
NEED_NO_BOX(::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextFieldBehaviour__DisableHighlight_d__5*, "", "TextFieldBehaviour/<DisableHighlight>d__5");
