#pragma once
// IWYU pragma private; include "Vuplex/WebView/BaseKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Vuplex/WebView/zzzz__WebViewOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseKeyboard)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class EventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace Vuplex::WebView {
class BaseKeyboard___c__DisplayClass7_0;
}
namespace Vuplex::WebView {
struct BaseKeyboard___init_d__13;
}
namespace Vuplex::WebView {
class BaseWebViewPrefab;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
// Forward declare root types
namespace Vuplex::WebView {
class BaseKeyboard;
}
namespace Vuplex::WebView {
class BaseKeyboard___c__DisplayClass7_0;
}
namespace Vuplex::WebView {
struct BaseKeyboard___init_d__13;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::BaseKeyboard);
MARK_REF_PTR_T(::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0);
MARK_VAL_T(::Vuplex::WebView::BaseKeyboard___init_d__13);
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.BaseKeyboard/<>c__DisplayClass7_0
class CORDL_TYPE BaseKeyboard___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field taskSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskSource, put=__cordl_internal_set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  taskSource;

static inline ::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <WaitUntilInitialized>b__0, addr 0x16d5b4c, size 0x54, virtual false, abstract: false, final false
inline void _WaitUntilInitialized_b__0(::System::Object*  sender, ::System::EventArgs*  e) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_taskSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskSource() ;

constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x16d4fbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseKeyboard___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseKeyboard___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseKeyboard___c__DisplayClass7_0(BaseKeyboard___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseKeyboard___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseKeyboard___c__DisplayClass7_0(BaseKeyboard___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{119};

/// @brief Field taskSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___taskSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0, ___taskSource) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.BaseKeyboard/<_init>d__13
struct CORDL_TYPE BaseKeyboard___init_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d5ba0, size 0x4cc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d6200, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseKeyboard___init_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::BaseKeyboard>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BaseKeyboard___init_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::BaseKeyboard>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::BaseKeyboard>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::BaseKeyboard___init_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard___init_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard___init_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard___init_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::BaseKeyboard___init_d__13, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies UnityEngine.MonoBehaviour, Vuplex.WebView.WebViewOptions
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.BaseKeyboard
class CORDL_TYPE BaseKeyboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass7_0 = ::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0;

using __init_d__13 = ::Vuplex::WebView::BaseKeyboard___init_d__13;

 __declspec(property(get=get_BaseWebViewPrefab)) ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  BaseWebViewPrefab;

/// @brief Field CustomKeyboardUrl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomKeyboardUrl, put=__cordl_internal_set_CustomKeyboardUrl)) ::StringW  CustomKeyboardUrl;

/// @brief Field Initialized, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Initialized, put=__cordl_internal_set_Initialized)) ::System::EventHandler*  Initialized;

/// @brief Field InputReceived, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputReceived, put=__cordl_internal_set_InputReceived)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  InputReceived;

/// @brief Field KeyPressed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyPressed, put=__cordl_internal_set_KeyPressed)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  KeyPressed;

/// @brief Field _isInitialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _webViewOptions, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__webViewOptions, put=setStaticF__webViewOptions)) ::Vuplex::WebView::WebViewOptions  _webViewOptions;

/// @brief Field _webViewPrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__webViewPrefab, put=__cordl_internal_set__webViewPrefab)) ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  _webViewPrefab;

static inline ::Vuplex::WebView::BaseKeyboard* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16d505c, size 0x94, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method WaitUntilInitialized, addr 0x16d4e7c, size 0x140, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitUntilInitialized() ;

/// @brief Method WebView_MessageEmitted, addr 0x16d50f0, size 0x1b8, virtual false, abstract: false, final false
inline void WebView_MessageEmitted(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  e) ;

constexpr ::StringW const& __cordl_internal_get_CustomKeyboardUrl() const;

constexpr ::StringW& __cordl_internal_get_CustomKeyboardUrl() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_Initialized() const;

constexpr ::System::EventHandler*& __cordl_internal_get_Initialized() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_InputReceived() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_InputReceived() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_KeyPressed() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_KeyPressed() ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> const& __cordl_internal_get__webViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>& __cordl_internal_get__webViewPrefab() ;

constexpr void __cordl_internal_set_CustomKeyboardUrl(::StringW  value) ;

constexpr void __cordl_internal_set_Initialized(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_InputReceived(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_KeyPressed(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

constexpr void __cordl_internal_set__webViewPrefab(::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  value) ;

/// @brief Method .ctor, addr 0x16d5acc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _getKeyboardLanguage, addr 0x16d53c0, size 0x160, virtual false, abstract: false, final false
inline ::StringW _getKeyboardLanguage() ;

/// @brief Method _init, addr 0x16d4fcc, size 0x90, virtual false, abstract: false, final false
inline void _init() ;

/// @brief Method _sendKeyboardLanguageMessage, addr 0x16d52a8, size 0x118, virtual false, abstract: false, final false
inline void _sendKeyboardLanguageMessage() ;

/// @brief Method _setLayerRecursively, addr 0x16d55c4, size 0x3a8, virtual false, abstract: false, final false
static inline void _setLayerRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer) ;

/// @brief Method add_Initialized, addr 0x16d4d44, size 0x9c, virtual false, abstract: false, final false
inline void add_Initialized(::System::EventHandler*  value) ;

/// @brief Method add_InputReceived, addr 0x16d596c, size 0xb0, virtual false, abstract: false, final false
inline void add_InputReceived(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_KeyPressed, addr 0x16d4be4, size 0xb0, virtual false, abstract: false, final false
inline void add_KeyPressed(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

static inline ::Vuplex::WebView::WebViewOptions getStaticF__webViewOptions() ;

/// @brief Method get_BaseWebViewPrefab, addr 0x16d4fc4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> get_BaseWebViewPrefab() ;

/// @brief Method remove_Initialized, addr 0x16d4de0, size 0x9c, virtual false, abstract: false, final false
inline void remove_Initialized(::System::EventHandler*  value) ;

/// @brief Method remove_InputReceived, addr 0x16d5a1c, size 0xb0, virtual false, abstract: false, final false
inline void remove_InputReceived(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_KeyPressed, addr 0x16d4c94, size 0xb0, virtual false, abstract: false, final false
inline void remove_KeyPressed(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

static inline void setStaticF__webViewOptions(::Vuplex::WebView::WebViewOptions  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseKeyboard(BaseKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseKeyboard(BaseKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{121};

/// @brief Field KeyPressed, offset: 0x20, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___KeyPressed;

/// @brief Field Initialized, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler*  ___Initialized;

/// @brief Field CustomKeyboardUrl, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___CustomKeyboardUrl;

/// @brief Field _isInitialized, offset: 0x38, size: 0x1, def value: None
 bool  ____isInitialized;

/// @brief Field _webViewPrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  ____webViewPrefab;

/// @brief Field InputReceived, offset: 0x48, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___InputReceived;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::BaseKeyboard, ___KeyPressed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard, ___Initialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard, ___CustomKeyboardUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard, ____isInitialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard, ____webViewPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseKeyboard, ___InputReceived) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::BaseKeyboard, 0x50>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::BaseKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::BaseKeyboard*, "Vuplex.WebView", "BaseKeyboard");
NEED_NO_BOX(::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::BaseKeyboard___c__DisplayClass7_0*, "Vuplex.WebView", "BaseKeyboard/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::BaseKeyboard___init_d__13, "Vuplex.WebView", "BaseKeyboard/<_init>d__13");
