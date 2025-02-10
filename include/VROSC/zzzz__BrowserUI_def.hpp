#pragma once
// IWYU pragma private; include "VROSC/BrowserUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BrowserUI)
namespace GlobalNamespace {
class Key;
}
namespace GlobalNamespace {
class UIInputField;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class BrowserController;
}
namespace VROSC {
struct BrowserUI__Setup_d__20;
}
namespace VROSC {
struct BrowserUI__Toggled_d__22;
}
namespace VROSC {
struct BrowserUI__WebViewFocusedInputFieldChanged_d__32;
}
namespace VROSC {
struct BrowserUI__WebViewLoadProgressChanged_d__31;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UIToggle;
}
namespace VROSC {
class WebViewInputArea;
}
namespace Vuplex::WebView {
class FocusedInputFieldChangedEventArgs;
}
namespace Vuplex::WebView {
class ProgressChangedEventArgs;
}
namespace Vuplex::WebView {
class UrlChangedEventArgs;
}
namespace Vuplex::WebView {
class WebViewPrefab;
}
// Forward declare root types
namespace VROSC {
class BrowserUI;
}
namespace VROSC {
struct BrowserUI__Setup_d__20;
}
namespace VROSC {
struct BrowserUI__Toggled_d__22;
}
namespace VROSC {
struct BrowserUI__WebViewFocusedInputFieldChanged_d__32;
}
namespace VROSC {
struct BrowserUI__WebViewLoadProgressChanged_d__31;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BrowserUI);
MARK_VAL_T(::VROSC::BrowserUI__Setup_d__20);
MARK_VAL_T(::VROSC::BrowserUI__Toggled_d__22);
MARK_VAL_T(::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32);
MARK_VAL_T(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.BrowserUI/<Setup>d__20
struct CORDL_TYPE BrowserUI__Setup_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1730274, size 0x11f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1731464, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BrowserUI__Setup_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: None }, CppParam { name: "controller", ty: "::UnityW<::VROSC::BrowserController>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BrowserUI__Setup_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::BrowserUI>  __4__this, ::UnityW<::VROSC::BrowserController>  controller, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::BrowserUI>  __4__this;

/// @brief Field controller, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::BrowserController>  controller;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserUI__Setup_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Setup_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Setup_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Setup_d__20, controller) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Setup_d__20, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserUI__Setup_d__20, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.BrowserUI/<Toggled>d__22
struct CORDL_TYPE BrowserUI__Toggled_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1731470, size 0x368, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17317d8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BrowserUI__Toggled_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr BrowserUI__Toggled_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  active, ::UnityW<::VROSC::BrowserUI>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1060};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field active, offset: 0x28, size: 0x1, def value: None
 bool  active;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::BrowserUI>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserUI__Toggled_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Toggled_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Toggled_d__22, active) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Toggled_d__22, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__Toggled_d__22, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserUI__Toggled_d__22, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.BrowserUI/<WebViewFocusedInputFieldChanged>d__32
struct CORDL_TYPE BrowserUI__WebViewFocusedInputFieldChanged_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17317e4, size 0x5c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1731da4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BrowserUI__WebViewFocusedInputFieldChanged_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::Vuplex::WebView::FocusedInputFieldChangedEventArgs*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr BrowserUI__WebViewFocusedInputFieldChanged_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Vuplex::WebView::FocusedInputFieldChangedEventArgs*  e, ::UnityW<::VROSC::BrowserUI>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field e, offset: 0x28, size: 0x8, def value: None
 ::Vuplex::WebView::FocusedInputFieldChangedEventArgs*  e;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::BrowserUI>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32, e) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace VROSC {
// Is value type: true
// CS Name: VROSC.BrowserUI/<WebViewLoadProgressChanged>d__31
struct CORDL_TYPE BrowserUI__WebViewLoadProgressChanged_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1731db0, size 0x418, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17321c8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BrowserUI__WebViewLoadProgressChanged_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::Vuplex::WebView::ProgressChangedEventArgs*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::BrowserUI>", modifiers: "", def_value: None }, CppParam { name: "_canGoBack_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr BrowserUI__WebViewLoadProgressChanged_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Vuplex::WebView::ProgressChangedEventArgs*  e, ::UnityW<::VROSC::BrowserUI>  __4__this, bool  _canGoBack_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1062};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field e, offset: 0x28, size: 0x8, def value: None
 ::Vuplex::WebView::ProgressChangedEventArgs*  e;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::BrowserUI>  __4__this;

/// @brief Field <canGoBack>5__2, offset: 0x38, size: 0x1, def value: None
 bool  _canGoBack_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, e) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, _canGoBack_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, Vuplex.WebView.FocusedInputFieldType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BrowserUI
class CORDL_TYPE BrowserUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Setup_d__20 = ::VROSC::BrowserUI__Setup_d__20;

using _Toggled_d__22 = ::VROSC::BrowserUI__Toggled_d__22;

using _WebViewFocusedInputFieldChanged_d__32 = ::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32;

using _WebViewLoadProgressChanged_d__31 = ::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31;

 __declspec(property(get=get_IsSetup, put=set_IsSetup)) bool  IsSetup;

/// @brief Field <IsSetup>k__BackingField, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSetup_k__BackingField, put=__cordl_internal_set__IsSetup_k__BackingField)) bool  _IsSetup_k__BackingField;

/// @brief Field _backButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__backButton, put=__cordl_internal_set__backButton)) ::UnityW<::VROSC::UIButton>  _backButton;

/// @brief Field _controller, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::VROSC::BrowserController>  _controller;

/// @brief Field _forwardButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwardButton, put=__cordl_internal_set__forwardButton)) ::UnityW<::VROSC::UIButton>  _forwardButton;

/// @brief Field _homeButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__homeButton, put=__cordl_internal_set__homeButton)) ::UnityW<::VROSC::UIButton>  _homeButton;

/// @brief Field _keyboardToggle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyboardToggle, put=__cordl_internal_set__keyboardToggle)) ::UnityW<::VROSC::UIToggle>  _keyboardToggle;

/// @brief Field _lastFocusedFieldType, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFocusedFieldType, put=__cordl_internal_set__lastFocusedFieldType)) ::Vuplex::WebView::FocusedInputFieldType  _lastFocusedFieldType;

/// @brief Field _lastURL, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastURL, put=__cordl_internal_set__lastURL)) ::StringW  _lastURL;

/// @brief Field _mover, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::TransformMover>  _mover;

/// @brief Field _passOnKeyboardInput, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__passOnKeyboardInput, put=__cordl_internal_set__passOnKeyboardInput)) bool  _passOnKeyboardInput;

/// @brief Field _refreshButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__refreshButton, put=__cordl_internal_set__refreshButton)) ::UnityW<::VROSC::UIButton>  _refreshButton;

/// @brief Field _scrollSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__scrollSpeed, put=__cordl_internal_set__scrollSpeed)) float_t  _scrollSpeed;

/// @brief Field _urlInputField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__urlInputField, put=__cordl_internal_set__urlInputField)) ::UnityW<::GlobalNamespace::UIInputField>  _urlInputField;

/// @brief Field _urlText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__urlText, put=__cordl_internal_set__urlText)) ::UnityW<::TMPro::TextMeshPro>  _urlText;

/// @brief Field _webViewInput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__webViewInput, put=__cordl_internal_set__webViewInput)) ::UnityW<::VROSC::WebViewInputArea>  _webViewInput;

/// @brief Field _webViewPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__webViewPrefab, put=__cordl_internal_set__webViewPrefab)) ::UnityW<::Vuplex::WebView::WebViewPrefab>  _webViewPrefab;

/// @brief Method BackPressed, addr 0x172fff0, size 0xb4, virtual false, abstract: false, final false
inline void BackPressed(::VROSC::ClickData*  clickData) ;

/// @brief Method ClearPressed, addr 0x172fe98, size 0x158, virtual false, abstract: false, final false
inline void ClearPressed() ;

/// @brief Method ForwardPressed, addr 0x17300a4, size 0xb4, virtual false, abstract: false, final false
inline void ForwardPressed(::VROSC::ClickData*  clickData) ;

/// @brief Method HomePressed, addr 0x173020c, size 0x48, virtual false, abstract: false, final false
inline void HomePressed(::VROSC::ClickData*  clickData) ;

/// @brief Method HoverChanged, addr 0x172f678, size 0x4, virtual false, abstract: false, final false
inline void HoverChanged(bool  hover) ;

/// @brief Method InputFieldUrlChanged, addr 0x172f864, size 0x4, virtual false, abstract: false, final false
inline void InputFieldUrlChanged(::StringW  url) ;

/// @brief Method KeyPressed, addr 0x172fcc0, size 0x1d8, virtual false, abstract: false, final false
inline void KeyPressed(::GlobalNamespace::Key*  key) ;

/// @brief Method KeyboardOpenedOrClosed, addr 0x172fc80, size 0x40, virtual false, abstract: false, final false
inline void KeyboardOpenedOrClosed(bool  opened) ;

/// @brief Method KeyboardToggled, addr 0x172fc00, size 0x80, virtual false, abstract: false, final false
inline void KeyboardToggled(::VROSC::InputDevice*  inputDevice, bool  toggled) ;

/// @brief Method LoadUrl, addr 0x172f868, size 0x1e4, virtual false, abstract: false, final false
inline void LoadUrl(::StringW  url) ;

static inline ::VROSC::BrowserUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x172e860, size 0xbac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RefreshPressed, addr 0x1730158, size 0xb4, virtual false, abstract: false, final false
inline void RefreshPressed(::VROSC::ClickData*  clickData) ;

/// @brief Method Setup, addr 0x172e750, size 0x98, virtual false, abstract: false, final false
inline void Setup(::VROSC::BrowserController*  controller) ;

/// @brief Method Toggled, addr 0x172f40c, size 0xa0, virtual false, abstract: false, final false
inline void Toggled(bool  active) ;

/// @brief Method UrlFieldSelected, addr 0x1730254, size 0x8, virtual false, abstract: false, final false
inline void UrlFieldSelected(::GlobalNamespace::UIInputField*  urlField) ;

/// @brief Method WebViewClicked, addr 0x172f590, size 0xe8, virtual false, abstract: false, final false
inline void WebViewClicked(::UnityEngine::Vector2  normalizedPosition, bool  clicked) ;

/// @brief Method WebViewDragged, addr 0x172f780, size 0xe4, virtual false, abstract: false, final false
inline void WebViewDragged(::UnityEngine::Vector2  dragDelta, ::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method WebViewFocusedInputFieldChanged, addr 0x172fb68, size 0x98, virtual false, abstract: false, final false
inline void WebViewFocusedInputFieldChanged(::System::Object*  sender, ::Vuplex::WebView::FocusedInputFieldChangedEventArgs*  e) ;

/// @brief Method WebViewHovered, addr 0x172f4ac, size 0xe4, virtual false, abstract: false, final false
inline void WebViewHovered(::UnityEngine::Vector2  normalizedPosition) ;

/// @brief Method WebViewLoadProgressChanged, addr 0x172facc, size 0x9c, virtual false, abstract: false, final false
inline void WebViewLoadProgressChanged(::System::Object*  sender, ::Vuplex::WebView::ProgressChangedEventArgs*  e) ;

/// @brief Method WebViewScrolled, addr 0x172f67c, size 0x104, virtual false, abstract: false, final false
inline void WebViewScrolled(::UnityEngine::Vector2  scrollDirection, ::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method WebViewUrlChanged, addr 0x172fa4c, size 0x80, virtual false, abstract: false, final false
inline void WebViewUrlChanged(::System::Object*  sender, ::Vuplex::WebView::UrlChangedEventArgs*  e) ;

constexpr bool const& __cordl_internal_get__IsSetup_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSetup_k__BackingField() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__backButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__backButton() ;

constexpr ::UnityW<::VROSC::BrowserController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::VROSC::BrowserController>& __cordl_internal_get__controller() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__forwardButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__forwardButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__homeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__homeButton() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__keyboardToggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__keyboardToggle() ;

constexpr ::Vuplex::WebView::FocusedInputFieldType const& __cordl_internal_get__lastFocusedFieldType() const;

constexpr ::Vuplex::WebView::FocusedInputFieldType& __cordl_internal_get__lastFocusedFieldType() ;

constexpr ::StringW const& __cordl_internal_get__lastURL() const;

constexpr ::StringW& __cordl_internal_get__lastURL() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__mover() ;

constexpr bool const& __cordl_internal_get__passOnKeyboardInput() const;

constexpr bool& __cordl_internal_get__passOnKeyboardInput() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__refreshButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__refreshButton() ;

constexpr float_t const& __cordl_internal_get__scrollSpeed() const;

constexpr float_t& __cordl_internal_get__scrollSpeed() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__urlInputField() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__urlInputField() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__urlText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__urlText() ;

constexpr ::UnityW<::VROSC::WebViewInputArea> const& __cordl_internal_get__webViewInput() const;

constexpr ::UnityW<::VROSC::WebViewInputArea>& __cordl_internal_get__webViewInput() ;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab> const& __cordl_internal_get__webViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab>& __cordl_internal_get__webViewPrefab() ;

constexpr void __cordl_internal_set__IsSetup_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__backButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::VROSC::BrowserController>  value) ;

constexpr void __cordl_internal_set__forwardButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__homeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__keyboardToggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__lastFocusedFieldType(::Vuplex::WebView::FocusedInputFieldType  value) ;

constexpr void __cordl_internal_set__lastURL(::StringW  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__passOnKeyboardInput(bool  value) ;

constexpr void __cordl_internal_set__refreshButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__scrollSpeed(float_t  value) ;

constexpr void __cordl_internal_set__urlInputField(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__urlText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__webViewInput(::UnityW<::VROSC::WebViewInputArea>  value) ;

constexpr void __cordl_internal_set__webViewPrefab(::UnityW<::Vuplex::WebView::WebViewPrefab>  value) ;

/// @brief Method .ctor, addr 0x173025c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsSetup, addr 0x172e84c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSetup() ;

/// @brief Method set_IsSetup, addr 0x172e854, size 0xc, virtual false, abstract: false, final false
inline void set_IsSetup(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BrowserUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BrowserUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BrowserUI(BrowserUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BrowserUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BrowserUI(BrowserUI const& ) = delete;

/// @brief Field HomeURL offset 0xffffffff size 0x8
static constexpr ::ConstString  HomeURL{u"https://virtuoso-vr.com/apphome"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1063};

/// @brief Field _urlText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____urlText;

/// @brief Field _webViewPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::WebViewPrefab>  ____webViewPrefab;

/// @brief Field _webViewInput, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::WebViewInputArea>  ____webViewInput;

/// @brief Field _urlInputField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____urlInputField;

/// @brief Field _backButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____backButton;

/// @brief Field _forwardButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____forwardButton;

/// @brief Field _refreshButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____refreshButton;

/// @brief Field _homeButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____homeButton;

/// @brief Field _keyboardToggle, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____keyboardToggle;

/// @brief Field _mover, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____mover;

/// @brief Field _scrollSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ____scrollSpeed;

/// @brief Field _controller, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::BrowserController>  ____controller;

/// @brief Field _passOnKeyboardInput, offset: 0x80, size: 0x1, def value: None
 bool  ____passOnKeyboardInput;

/// @brief Field _lastURL, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____lastURL;

/// @brief Field _lastFocusedFieldType, offset: 0x90, size: 0x4, def value: None
 ::Vuplex::WebView::FocusedInputFieldType  ____lastFocusedFieldType;

/// @brief Field <IsSetup>k__BackingField, offset: 0x94, size: 0x1, def value: None
 bool  ____IsSetup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserUI, ____urlText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____webViewPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____webViewInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____urlInputField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____backButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____forwardButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____refreshButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____homeButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____keyboardToggle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____mover) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____scrollSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____controller) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____passOnKeyboardInput) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____lastURL) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____lastFocusedFieldType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserUI, ____IsSetup_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserUI, 0x98>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BrowserUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserUI*, "VROSC", "BrowserUI");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserUI__Setup_d__20, "VROSC", "BrowserUI/<Setup>d__20");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserUI__Toggled_d__22, "VROSC", "BrowserUI/<Toggled>d__22");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserUI__WebViewFocusedInputFieldChanged_d__32, "VROSC", "BrowserUI/<WebViewFocusedInputFieldChanged>d__32");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserUI__WebViewLoadProgressChanged_d__31, "VROSC", "BrowserUI/<WebViewLoadProgressChanged>d__31");
