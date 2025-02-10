#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/NativeKeyboardListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeKeyboardListener)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace Vuplex::WebView::Internal {
class KeyboardEventArgs;
}
namespace Vuplex::WebView::Internal {
class NativeKeyboardListener_KeyRepeatState;
}
namespace Vuplex::WebView::Internal {
class NativeKeyboardListener___c;
}
namespace Vuplex::WebView::Internal {
template<typename TArg,typename TReturn>
class NativeKeyboardListener___c__DisplayClass31_0_2;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
namespace Vuplex::WebView {
struct KeyModifier;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class NativeKeyboardListener;
}
namespace Vuplex::WebView::Internal {
class NativeKeyboardListener_KeyRepeatState;
}
namespace Vuplex::WebView::Internal {
class NativeKeyboardListener___c;
}
namespace Vuplex::WebView::Internal {
template<typename TArg,typename TReturn>
class NativeKeyboardListener___c__DisplayClass31_0_2;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::NativeKeyboardListener);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::NativeKeyboardListener___c);
MARK_GEN_REF_PTR_T(::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.NativeKeyboardListener/KeyRepeatState
class CORDL_TYPE NativeKeyboardListener_KeyRepeatState : public ::System::Object {
public:
// Declarations
/// @brief Field HasRepeated, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasRepeated, put=__cordl_internal_set_HasRepeated)) bool  HasRepeated;

/// @brief Field Key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::StringW  Key;

static inline ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState* New_ctor() ;

constexpr bool const& __cordl_internal_get_HasRepeated() const;

constexpr bool& __cordl_internal_get_HasRepeated() ;

constexpr ::StringW const& __cordl_internal_get_Key() const;

constexpr ::StringW& __cordl_internal_get_Key() ;

constexpr void __cordl_internal_set_HasRepeated(bool  value) ;

constexpr void __cordl_internal_set_Key(::StringW  value) ;

/// @brief Method .ctor, addr 0x17c0674, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeKeyboardListener_KeyRepeatState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener_KeyRepeatState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeKeyboardListener_KeyRepeatState(NativeKeyboardListener_KeyRepeatState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener_KeyRepeatState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeKeyboardListener_KeyRepeatState(NativeKeyboardListener_KeyRepeatState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{253};

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Key;

/// @brief Field HasRepeated, offset: 0x18, size: 0x1, def value: None
 bool  ___HasRepeated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState, ___HasRepeated) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.NativeKeyboardListener/<>c
class CORDL_TYPE NativeKeyboardListener___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Vuplex::WebView::Internal::NativeKeyboardListener___c*  __9;

static inline ::Vuplex::WebView::Internal::NativeKeyboardListener___c* New_ctor() ;

/// @brief Method <.cctor>b__44_0, addr 0x17c1420, size 0x150, virtual false, abstract: false, final false
inline bool __cctor_b__44_0(::StringW  javaScriptKeyName) ;

/// @brief Method <.cctor>b__44_1, addr 0x17c1570, size 0x95c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> __cctor_b__44_1(::StringW  javaScriptKeyValue) ;

/// @brief Method .ctor, addr 0x17c1418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Vuplex::WebView::Internal::NativeKeyboardListener___c* getStaticF___9() ;

static inline void setStaticF___9(::Vuplex::WebView::Internal::NativeKeyboardListener___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeKeyboardListener___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeKeyboardListener___c(NativeKeyboardListener___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeKeyboardListener___c(NativeKeyboardListener___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{254};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::NativeKeyboardListener___c, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// cpp template
template<typename TArg,typename TReturn>
// Is value type: false
// CS Name: Vuplex.WebView.Internal.NativeKeyboardListener/<>c__DisplayClass31_0`2<TArg,TReturn>
class CORDL_TYPE NativeKeyboardListener___c__DisplayClass31_0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cache, put=__cordl_internal_set_cache)) ::System::Collections::Generic::Dictionary_2<TArg,TReturn>*  cache;

/// @brief Field function, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_function, put=__cordl_internal_set_function)) ::System::Func_2<TArg,TReturn>*  function;

static inline ::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<TArg,TReturn>* const& __cordl_internal_get_cache() const;

constexpr ::System::Collections::Generic::Dictionary_2<TArg,TReturn>*& __cordl_internal_get_cache() ;

constexpr ::System::Func_2<TArg,TReturn>* const& __cordl_internal_get_function() const;

constexpr ::System::Func_2<TArg,TReturn>*& __cordl_internal_get_function() ;

constexpr void __cordl_internal_set_cache(::System::Collections::Generic::Dictionary_2<TArg,TReturn>*  value) ;

constexpr void __cordl_internal_set_function(::System::Func_2<TArg,TReturn>*  value) ;

/// @brief Method <_memoize>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TReturn __memoize_b__0(TArg  arg) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeKeyboardListener___c__DisplayClass31_0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener___c__DisplayClass31_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeKeyboardListener___c__DisplayClass31_0_2(NativeKeyboardListener___c__DisplayClass31_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener___c__DisplayClass31_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeKeyboardListener___c__DisplayClass31_0_2(NativeKeyboardListener___c__DisplayClass31_0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{255};

/// @brief Field cache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TArg,TReturn>*  ___cache;

/// @brief Field function, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TArg,TReturn>*  ___function;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView::Internal
// Dependencies UnityEngine.MonoBehaviour, Vuplex.WebView.KeyModifier
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.NativeKeyboardListener
class CORDL_TYPE NativeKeyboardListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using KeyRepeatState = ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState;

using __c = ::Vuplex::WebView::Internal::NativeKeyboardListener___c;

template<typename TArg,typename TReturn>
using __c__DisplayClass31_0_2 = ::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg, TReturn>;

/// @brief Field ImeCompositionCancelled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImeCompositionCancelled, put=__cordl_internal_set_ImeCompositionCancelled)) ::System::EventHandler*  ImeCompositionCancelled;

/// @brief Field ImeCompositionChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImeCompositionChanged, put=__cordl_internal_set_ImeCompositionChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ImeCompositionChanged;

/// @brief Field ImeCompositionFinished, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImeCompositionFinished, put=__cordl_internal_set_ImeCompositionFinished)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ImeCompositionFinished;

/// @brief Field KeyDownReceived, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyDownReceived, put=__cordl_internal_set_KeyDownReceived)) ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  KeyDownReceived;

/// @brief Field KeyUpReceived, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyUpReceived, put=__cordl_internal_set_KeyUpReceived)) ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  KeyUpReceived;

/// @brief Field _alphanumericRegex, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__alphanumericRegex, put=__cordl_internal_set__alphanumericRegex)) ::System::Text::RegularExpressions::Regex*  _alphanumericRegex;

/// @brief Field _getPotentialUnityKeyNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__getPotentialUnityKeyNames, put=setStaticF__getPotentialUnityKeyNames)) ::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>*  _getPotentialUnityKeyNames;

/// @brief Field _hasValidUnityKeyName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__hasValidUnityKeyName, put=setStaticF__hasValidUnityKeyName)) ::System::Func_2<::StringW,bool>*  _hasValidUnityKeyName;

/// @brief Field _keyRepeatState, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyRepeatState, put=__cordl_internal_set__keyRepeatState)) ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*  _keyRepeatState;

/// @brief Field _keyValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__keyValues, put=setStaticF__keyValues)) ::ArrayW<::StringW,::Array<::StringW>*>  _keyValues;

/// @brief Field _keyValuesUndetectableThroughInputString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__keyValuesUndetectableThroughInputString, put=setStaticF__keyValuesUndetectableThroughInputString)) ::ArrayW<::StringW,::Array<::StringW>*>  _keyValuesUndetectableThroughInputString;

/// @brief Field _keysDown, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__keysDown, put=__cordl_internal_set__keysDown)) ::System::Collections::Generic::List_1<::StringW>*  _keysDown;

/// @brief Field _legacyInputManagerDisabled, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__legacyInputManagerDisabled, put=__cordl_internal_set__legacyInputManagerDisabled)) bool  _legacyInputManagerDisabled;

/// @brief Field _modifiersDown, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__modifiersDown, put=__cordl_internal_set__modifiersDown)) ::Vuplex::WebView::KeyModifier  _modifiersDown;

/// @brief Field _previousImeCompositionString, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousImeCompositionString, put=__cordl_internal_set__previousImeCompositionString)) ::StringW  _previousImeCompositionString;

/// @brief Method Awake, addr 0x17bf108, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Instantiate, addr 0x17bd7e8, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener> Instantiate() ;

static inline ::Vuplex::WebView::Internal::NativeKeyboardListener* New_ctor() ;

/// @brief Method OnGUI, addr 0x17bf31c, size 0x134, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Update, addr 0x17c07b0, size 0x3c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_ImeCompositionCancelled() const;

constexpr ::System::EventHandler*& __cordl_internal_get_ImeCompositionCancelled() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_ImeCompositionChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_ImeCompositionChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_ImeCompositionFinished() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_ImeCompositionFinished() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>* const& __cordl_internal_get_KeyDownReceived() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*& __cordl_internal_get_KeyDownReceived() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>* const& __cordl_internal_get_KeyUpReceived() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*& __cordl_internal_get_KeyUpReceived() ;

constexpr ::System::Text::RegularExpressions::Regex* const& __cordl_internal_get__alphanumericRegex() const;

constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get__alphanumericRegex() ;

constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState* const& __cordl_internal_get__keyRepeatState() const;

constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*& __cordl_internal_get__keyRepeatState() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__keysDown() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__keysDown() ;

constexpr bool const& __cordl_internal_get__legacyInputManagerDisabled() const;

constexpr bool& __cordl_internal_get__legacyInputManagerDisabled() ;

constexpr ::Vuplex::WebView::KeyModifier const& __cordl_internal_get__modifiersDown() const;

constexpr ::Vuplex::WebView::KeyModifier& __cordl_internal_get__modifiersDown() ;

constexpr ::StringW const& __cordl_internal_get__previousImeCompositionString() const;

constexpr ::StringW& __cordl_internal_get__previousImeCompositionString() ;

constexpr void __cordl_internal_set_ImeCompositionCancelled(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_ImeCompositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_ImeCompositionFinished(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_KeyDownReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value) ;

constexpr void __cordl_internal_set_KeyUpReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value) ;

constexpr void __cordl_internal_set__alphanumericRegex(::System::Text::RegularExpressions::Regex*  value) ;

constexpr void __cordl_internal_set__keyRepeatState(::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*  value) ;

constexpr void __cordl_internal_set__keysDown(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__legacyInputManagerDisabled(bool  value) ;

constexpr void __cordl_internal_set__modifiersDown(::Vuplex::WebView::KeyModifier  value) ;

constexpr void __cordl_internal_set__previousImeCompositionString(::StringW  value) ;

/// @brief Method _areKeysUndetectableThroughInputStringPressed, addr 0x17befd4, size 0x134, virtual false, abstract: false, final false
inline bool _areKeysUndetectableThroughInputStringPressed() ;

/// @brief Method _checkIfImeShouldBeEnabled, addr 0x17bf17c, size 0xd4, virtual false, abstract: false, final false
inline ::System::Tuple_2<bool,::StringW>* _checkIfImeShouldBeEnabled() ;

/// @brief Method .ctor, addr 0x17c07ec, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _enableImeIfNeeded, addr 0x17bf10c, size 0x70, virtual false, abstract: false, final false
inline void _enableImeIfNeeded() ;

/// @brief Method _getModifiers, addr 0x17bf250, size 0xcc, virtual false, abstract: false, final false
inline ::Vuplex::WebView::KeyModifier _getModifiers() ;

/// @brief Method _memoize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TArg,typename TReturn>
static inline ::System::Func_2<TArg,TReturn>* _memoize(::System::Func_2<TArg,TReturn>*  function) ;

/// @brief Method _processIme, addr 0x17bf790, size 0x2d4, virtual false, abstract: false, final false
inline bool _processIme() ;

/// @brief Method _processInputString, addr 0x17bf450, size 0x340, virtual false, abstract: false, final false
inline bool _processInputString() ;

/// @brief Method _processKeysPressed, addr 0x17bfa64, size 0x5c, virtual false, abstract: false, final false
inline void _processKeysPressed() ;

/// @brief Method _processKeysReleased, addr 0x17c01f0, size 0x484, virtual false, abstract: false, final false
inline void _processKeysReleased() ;

/// @brief Method _processKeysUndetectableThroughInputString, addr 0x17bfac0, size 0x2d0, virtual false, abstract: false, final false
inline bool _processKeysUndetectableThroughInputString() ;

/// @brief Method _processModifierKeysOnly, addr 0x17bfd90, size 0x460, virtual false, abstract: false, final false
inline void _processModifierKeysOnly() ;

/// @brief Method _repeatKey, addr 0x17c067c, size 0x134, virtual false, abstract: false, final false
inline void _repeatKey() ;

/// @brief Method add_ImeCompositionCancelled, addr 0x17bd874, size 0x9c, virtual false, abstract: false, final false
inline void add_ImeCompositionCancelled(::System::EventHandler*  value) ;

/// @brief Method add_ImeCompositionChanged, addr 0x17bd910, size 0xb0, virtual false, abstract: false, final false
inline void add_ImeCompositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_ImeCompositionFinished, addr 0x17bd9c0, size 0xb0, virtual false, abstract: false, final false
inline void add_ImeCompositionFinished(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_KeyDownReceived, addr 0x17bda70, size 0xb0, virtual false, abstract: false, final false
inline void add_KeyDownReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value) ;

/// @brief Method add_KeyUpReceived, addr 0x17bdb20, size 0xb0, virtual false, abstract: false, final false
inline void add_KeyUpReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value) ;

static inline ::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>* getStaticF__getPotentialUnityKeyNames() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF__hasValidUnityKeyName() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF__keyValues() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF__keyValuesUndetectableThroughInputString() ;

/// @brief Method remove_ImeCompositionCancelled, addr 0x17bec78, size 0x9c, virtual false, abstract: false, final false
inline void remove_ImeCompositionCancelled(::System::EventHandler*  value) ;

/// @brief Method remove_ImeCompositionChanged, addr 0x17bed14, size 0xb0, virtual false, abstract: false, final false
inline void remove_ImeCompositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_ImeCompositionFinished, addr 0x17bedc4, size 0xb0, virtual false, abstract: false, final false
inline void remove_ImeCompositionFinished(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_KeyDownReceived, addr 0x17bee74, size 0xb0, virtual false, abstract: false, final false
inline void remove_KeyDownReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value) ;

/// @brief Method remove_KeyUpReceived, addr 0x17bef24, size 0xb0, virtual false, abstract: false, final false
inline void remove_KeyUpReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value) ;

static inline void setStaticF__getPotentialUnityKeyNames(::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>*  value) ;

static inline void setStaticF__hasValidUnityKeyName(::System::Func_2<::StringW,bool>*  value) ;

static inline void setStaticF__keyValues(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF__keyValuesUndetectableThroughInputString(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeKeyboardListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeKeyboardListener(NativeKeyboardListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeKeyboardListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeKeyboardListener(NativeKeyboardListener const& ) = delete;

/// @brief Field REPEAT_KEY_METHOD_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  REPEAT_KEY_METHOD_NAME{u"_repeatKey"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{256};

/// @brief Field ImeCompositionCancelled, offset: 0x20, size: 0x8, def value: None
 ::System::EventHandler*  ___ImeCompositionCancelled;

/// @brief Field ImeCompositionChanged, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___ImeCompositionChanged;

/// @brief Field ImeCompositionFinished, offset: 0x30, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___ImeCompositionFinished;

/// @brief Field KeyDownReceived, offset: 0x38, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  ___KeyDownReceived;

/// @brief Field KeyUpReceived, offset: 0x40, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  ___KeyUpReceived;

/// @brief Field _alphanumericRegex, offset: 0x48, size: 0x8, def value: None
 ::System::Text::RegularExpressions::Regex*  ____alphanumericRegex;

/// @brief Field _keysDown, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____keysDown;

/// @brief Field _keyRepeatState, offset: 0x58, size: 0x8, def value: None
 ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*  ____keyRepeatState;

/// @brief Field _legacyInputManagerDisabled, offset: 0x60, size: 0x1, def value: None
 bool  ____legacyInputManagerDisabled;

/// @brief Field _modifiersDown, offset: 0x64, size: 0x4, def value: None
 ::Vuplex::WebView::KeyModifier  ____modifiersDown;

/// @brief Field _previousImeCompositionString, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____previousImeCompositionString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ___ImeCompositionCancelled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ___ImeCompositionChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ___ImeCompositionFinished) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ___KeyDownReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ___KeyUpReceived) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ____alphanumericRegex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ____keysDown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ____keyRepeatState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ____legacyInputManagerDisabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ____modifiersDown) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::NativeKeyboardListener, ____previousImeCompositionString) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::NativeKeyboardListener, 0x70>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::NativeKeyboardListener);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::NativeKeyboardListener*, "Vuplex.WebView.Internal", "NativeKeyboardListener");
NEED_NO_BOX(::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*, "Vuplex.WebView.Internal", "NativeKeyboardListener/KeyRepeatState");
NEED_NO_BOX(::Vuplex::WebView::Internal::NativeKeyboardListener___c);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::NativeKeyboardListener___c*, "Vuplex.WebView.Internal", "NativeKeyboardListener/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2, "Vuplex.WebView.Internal", "NativeKeyboardListener/<>c__DisplayClass31_0`2");
