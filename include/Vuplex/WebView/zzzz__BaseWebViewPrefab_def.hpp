#pragma once
// IWYU pragma private; include "Vuplex/WebView/BaseWebViewPrefab.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Vuplex/WebView/zzzz__DragMode_def.hpp"
#include "Vuplex/WebView/zzzz__WebViewOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseWebViewPrefab)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
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
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace Vuplex::WebView::Internal {
class ViewportMaterialView;
}
namespace Vuplex::WebView {
class BaseWebViewPrefab___c__DisplayClass41_0;
}
namespace Vuplex::WebView {
struct BaseWebViewPrefab___initBase_d__93;
}
namespace Vuplex::WebView {
struct BaseWebViewPrefab___initWebView_d__95;
}
namespace Vuplex::WebView {
class ClickedEventArgs;
}
namespace Vuplex::WebView {
class ConsoleMessageEventArgs;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
namespace Vuplex::WebView {
class IPointerInputDetector;
}
namespace Vuplex::WebView {
class IWebView;
}
namespace Vuplex::WebView {
class IWithNative2DMode;
}
namespace Vuplex::WebView {
class IWithTouch;
}
namespace Vuplex::WebView {
class PointerEventArgs;
}
namespace Vuplex::WebView {
class ScrolledEventArgs;
}
namespace Vuplex::WebView {
struct WebViewOptions;
}
// Forward declare root types
namespace Vuplex::WebView {
class BaseWebViewPrefab;
}
namespace Vuplex::WebView {
class BaseWebViewPrefab___c__DisplayClass41_0;
}
namespace Vuplex::WebView {
struct BaseWebViewPrefab___initBase_d__93;
}
namespace Vuplex::WebView {
struct BaseWebViewPrefab___initWebView_d__95;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::BaseWebViewPrefab);
MARK_REF_PTR_T(::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0);
MARK_VAL_T(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93);
MARK_VAL_T(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95);
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.BaseWebViewPrefab/<>c__DisplayClass41_0
class CORDL_TYPE BaseWebViewPrefab___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field taskSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskSource, put=__cordl_internal_set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  taskSource;

static inline ::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <WaitUntilInitialized>b__0, addr 0x16da6fc, size 0x54, virtual false, abstract: false, final false
inline void _WaitUntilInitialized_b__0(::System::Object*  sender, ::System::EventArgs*  e) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_taskSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskSource() ;

constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x16d7a54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebViewPrefab___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebViewPrefab___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebViewPrefab___c__DisplayClass41_0(BaseWebViewPrefab___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebViewPrefab___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebViewPrefab___c__DisplayClass41_0(BaseWebViewPrefab___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{122};

/// @brief Field taskSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___taskSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0, ___taskSource) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, UnityEngine.Rect
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.BaseWebViewPrefab/<_initBase>d__93
struct CORDL_TYPE BaseWebViewPrefab___initBase_d__93 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16da750, size 0x4b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16dac00, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseWebViewPrefab___initBase_d__93() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::BaseWebViewPrefab>", modifiers: "", def_value: None }, CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "preferNative2DMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::IWebView*>", modifiers: "", def_value: None }]
constexpr BaseWebViewPrefab___initBase_d__93(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  __4__this, ::UnityEngine::Rect  rect, bool  preferNative2DMode, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::IWebView*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{123};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  __4__this;

/// @brief Field rect, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field preferNative2DMode, offset: 0x38, size: 0x1, def value: None
 bool  preferNative2DMode;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::IWebView*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, preferNative2DMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, 0x48>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, UnityEngine.Rect
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.BaseWebViewPrefab/<_initWebView>d__95
struct CORDL_TYPE BaseWebViewPrefab___initWebView_d__95 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16dac68, size 0x814, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16db564, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseWebViewPrefab___initWebView_d__95() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::IWebView*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::BaseWebViewPrefab>", modifiers: "", def_value: None }, CppParam { name: "preferNative2DMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "_webView_5__2", ty: "::Vuplex::WebView::IWebView*", modifiers: "", def_value: None }, CppParam { name: "_native2DWebView_5__3", ty: "::Vuplex::WebView::IWithNative2DMode*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BaseWebViewPrefab___initWebView_d__95(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::IWebView*>  __t__builder, ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  __4__this, bool  preferNative2DMode, ::UnityEngine::Rect  rect, ::Vuplex::WebView::IWebView*  _webView_5__2, ::Vuplex::WebView::IWithNative2DMode*  _native2DWebView_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::IWebView*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  __4__this;

/// @brief Field preferNative2DMode, offset: 0x28, size: 0x1, def value: None
 bool  preferNative2DMode;

/// @brief Field rect, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field <webView>5__2, offset: 0x40, size: 0x8, def value: None
 ::Vuplex::WebView::IWebView*  _webView_5__2;

/// @brief Field <native2DWebView>5__3, offset: 0x48, size: 0x8, def value: None
 ::Vuplex::WebView::IWithNative2DMode*  _native2DWebView_5__3;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, preferNative2DMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, rect) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, _webView_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, _native2DWebView_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, 0x58>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2, Vuplex.WebView.DragMode, Vuplex.WebView.WebViewOptions
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.BaseWebViewPrefab
class CORDL_TYPE BaseWebViewPrefab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass41_0 = ::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0;

using __initBase_d__93 = ::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93;

using __initWebView_d__95 = ::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95;

/// @brief Field Clicked, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Clicked, put=__cordl_internal_set_Clicked)) ::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  Clicked;

/// @brief Field ClickingEnabled, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClickingEnabled, put=__cordl_internal_set_ClickingEnabled)) bool  ClickingEnabled;

/// @brief Field CursorIconsEnabled, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_CursorIconsEnabled, put=__cordl_internal_set_CursorIconsEnabled)) bool  CursorIconsEnabled;

/// @brief Field DragMode, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DragMode, put=__cordl_internal_set_DragMode)) ::Vuplex::WebView::DragMode  DragMode;

/// @brief Field DragThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_DragThreshold, put=__cordl_internal_set_DragThreshold)) float_t  DragThreshold;

 __declspec(property(get=get_DragToScrollThreshold, put=set_DragToScrollThreshold)) float_t  DragToScrollThreshold;

/// @brief Field HoveringEnabled, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_HoveringEnabled, put=__cordl_internal_set_HoveringEnabled)) bool  HoveringEnabled;

/// @brief Field InitialUrl, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitialUrl, put=__cordl_internal_set_InitialUrl)) ::StringW  InitialUrl;

/// @brief Field Initialized, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Initialized, put=__cordl_internal_set_Initialized)) ::System::EventHandler*  Initialized;

/// @brief Field KeyboardEnabled, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_KeyboardEnabled, put=__cordl_internal_set_KeyboardEnabled)) bool  KeyboardEnabled;

/// @brief Field LogConsoleMessages, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogConsoleMessages, put=__cordl_internal_set_LogConsoleMessages)) bool  LogConsoleMessages;

 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

/// @brief Field PixelDensity, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_PixelDensity, put=__cordl_internal_set_PixelDensity)) float_t  PixelDensity;

/// @brief Field PointerEntered, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointerEntered, put=__cordl_internal_set_PointerEntered)) ::System::EventHandler*  PointerEntered;

/// @brief Field PointerExited, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointerExited, put=__cordl_internal_set_PointerExited)) ::System::EventHandler*  PointerExited;

/// @brief Field RemoteDebuggingEnabled, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_RemoteDebuggingEnabled, put=__cordl_internal_set_RemoteDebuggingEnabled)) bool  RemoteDebuggingEnabled;

/// @brief Field Scrolled, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scrolled, put=__cordl_internal_set_Scrolled)) ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  Scrolled;

/// @brief Field ScrollingEnabled, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_ScrollingEnabled, put=__cordl_internal_set_ScrollingEnabled)) bool  ScrollingEnabled;

 __declspec(property(get=get_Visible, put=set_Visible)) bool  Visible;

 __declspec(property(get=get_WebView, put=set_WebView)) ::Vuplex::WebView::IWebView*  WebView;

/// @brief Field <DragToScrollThreshold>k__BackingField, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__DragToScrollThreshold_k__BackingField, put=__cordl_internal_set__DragToScrollThreshold_k__BackingField)) float_t  _DragToScrollThreshold_k__BackingField;

/// @brief Field _appliedResolution, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__appliedResolution, put=__cordl_internal_set__appliedResolution)) float_t  _appliedResolution;

/// @brief Field _cachedVideoLayer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedVideoLayer, put=__cordl_internal_set__cachedVideoLayer)) ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  _cachedVideoLayer;

/// @brief Field _cachedView, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedView, put=__cordl_internal_set__cachedView)) ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  _cachedView;

/// @brief Field _cachedWebView, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedWebView, put=__cordl_internal_set__cachedWebView)) ::Vuplex::WebView::IWebView*  _cachedWebView;

/// @brief Field _consoleMessageLoggedHandlerAttached, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__consoleMessageLoggedHandlerAttached, put=__cordl_internal_set__consoleMessageLoggedHandlerAttached)) bool  _consoleMessageLoggedHandlerAttached;

/// @brief Field _dragThresholdReached, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get__dragThresholdReached, put=__cordl_internal_set__dragThresholdReached)) bool  _dragThresholdReached;

/// @brief Field _dragToScrollClickIsPending, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get__dragToScrollClickIsPending, put=__cordl_internal_set__dragToScrollClickIsPending)) bool  _dragToScrollClickIsPending;

/// @brief Field _hasOverriddenCursorIcon, offset 0x8b, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasOverriddenCursorIcon, put=__cordl_internal_set__hasOverriddenCursorIcon)) bool  _hasOverriddenCursorIcon;

 __declspec(property(get=get__heightInPixels)) int32_t  _heightInPixels;

/// @brief Field _keyboardHasBeenEnabled, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__keyboardHasBeenEnabled, put=__cordl_internal_set__keyboardHasBeenEnabled)) bool  _keyboardHasBeenEnabled;

/// @brief Field _loggedDragWarning, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get__loggedDragWarning, put=__cordl_internal_set__loggedDragWarning)) bool  _loggedDragWarning;

/// @brief Field _loggedHoverWarning, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__loggedHoverWarning, put=setStaticF__loggedHoverWarning)) bool  _loggedHoverWarning;

/// @brief Field _options, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get__options, put=__cordl_internal_set__options)) ::Vuplex::WebView::WebViewOptions  _options;

/// @brief Field _pointerDownNormalizedPoint, offset 0xac, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerDownNormalizedPoint, put=__cordl_internal_set__pointerDownNormalizedPoint)) ::UnityEngine::Vector2  _pointerDownNormalizedPoint;

 __declspec(property(get=get__pointerInputDetector, put=set__pointerInputDetector)) ::Vuplex::WebView::IPointerInputDetector*  _pointerInputDetector;

/// @brief Field _pointerInputDetectorMonoBehaviour, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerInputDetectorMonoBehaviour, put=__cordl_internal_set__pointerInputDetectorMonoBehaviour)) ::UnityW<::UnityEngine::MonoBehaviour>  _pointerInputDetectorMonoBehaviour;

/// @brief Field _pointerIsDown, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__pointerIsDown, put=__cordl_internal_set__pointerIsDown)) bool  _pointerIsDown;

/// @brief Field _previousMovePointerPoint, offset 0xbc, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousMovePointerPoint, put=__cordl_internal_set__previousMovePointerPoint)) ::UnityEngine::Vector2  _previousMovePointerPoint;

/// @brief Field _previousNormalizedDragPoint, offset 0xb4, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousNormalizedDragPoint, put=__cordl_internal_set__previousNormalizedDragPoint)) ::UnityEngine::Vector2  _previousNormalizedDragPoint;

/// @brief Field _remoteDebuggingEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__remoteDebuggingEnabled, put=setStaticF__remoteDebuggingEnabled)) bool  _remoteDebuggingEnabled;

/// @brief Field _sizeInUnityUnits, offset 0xc4, size 0x8 
 __declspec(property(get=__cordl_internal_get__sizeInUnityUnits, put=__cordl_internal_set__sizeInUnityUnits)) ::UnityEngine::Vector2  _sizeInUnityUnits;

 __declspec(property(get=get__videoLayer)) ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  _videoLayer;

 __declspec(property(get=get__videoLayerIsEnabled, put=set__videoLayerIsEnabled)) bool  _videoLayerIsEnabled;

/// @brief Field _videoMaterial, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoMaterial, put=__cordl_internal_set__videoMaterial)) ::UnityW<::UnityEngine::Material>  _videoMaterial;

 __declspec(property(get=get__view)) ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  _view;

/// @brief Field _viewMaterial, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__viewMaterial, put=__cordl_internal_set__viewMaterial)) ::UnityW<::UnityEngine::Material>  _viewMaterial;

/// @brief Field _visible, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__visible, put=__cordl_internal_set__visible)) bool  _visible;

/// @brief Field _webViewForInitialization, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__webViewForInitialization, put=__cordl_internal_set__webViewForInitialization)) ::Vuplex::WebView::IWebView*  _webViewForInitialization;

/// @brief Field _webViewGameObject, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__webViewGameObject, put=__cordl_internal_set__webViewGameObject)) ::UnityW<::UnityEngine::GameObject>  _webViewGameObject;

 __declspec(property(get=get__widthInPixels)) int32_t  _widthInPixels;

/// @brief Method BrowserToScreenPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 BrowserToScreenPoint(int32_t  xInPixels, int32_t  yInPixels) ;

/// @brief Method Destroy, addr 0x16d6c10, size 0x6c, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method InputDetector_BeganDrag, addr 0x16d8b6c, size 0x10, virtual false, abstract: false, final false
inline void InputDetector_BeganDrag(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method InputDetector_Dragged, addr 0x16d8b7c, size 0x328, virtual false, abstract: false, final false
inline void InputDetector_Dragged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method InputDetector_PointerDown, addr 0x16d9168, size 0x2e8, virtual true, abstract: false, final false
inline void InputDetector_PointerDown(::System::Object*  sender, ::Vuplex::WebView::PointerEventArgs*  eventArgs) ;

/// @brief Method InputDetector_PointerEntered, addr 0x16d94d4, size 0x80, virtual false, abstract: false, final false
inline void InputDetector_PointerEntered(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method InputDetector_PointerExited, addr 0x16d9554, size 0xec, virtual false, abstract: false, final false
inline void InputDetector_PointerExited(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method InputDetector_PointerMoved, addr 0x16d9640, size 0x6c, virtual false, abstract: false, final false
inline void InputDetector_PointerMoved(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2>*  eventArgs) ;

/// @brief Method InputDetector_PointerUp, addr 0x16d96ac, size 0x434, virtual true, abstract: false, final false
inline void InputDetector_PointerUp(::System::Object*  sender, ::Vuplex::WebView::PointerEventArgs*  eventArgs) ;

/// @brief Method InputDetector_Scrolled, addr 0x16d9b50, size 0x50, virtual false, abstract: false, final false
inline void InputDetector_Scrolled(::System::Object*  sender, ::Vuplex::WebView::ScrolledEventArgs*  eventArgs) ;

static inline ::Vuplex::WebView::BaseWebViewPrefab* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16d9ba0, size 0x2a8, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetCutoutRect, addr 0x16d61b0, size 0x50, virtual false, abstract: false, final false
inline void SetCutoutRect(::UnityEngine::Rect  rect) ;

/// @brief Method SetOptionsForInitialization, addr 0x16d6c7c, size 0x74, virtual false, abstract: false, final false
inline void SetOptionsForInitialization(::Vuplex::WebView::WebViewOptions  options) ;

/// @brief Method SetPointerInputDetector, addr 0x16d6cf0, size 0x5c, virtual false, abstract: false, final false
inline void SetPointerInputDetector(::Vuplex::WebView::IPointerInputDetector*  pointerInputDetector) ;

/// @brief Method SetWebViewForInitialization, addr 0x16d7934, size 0x120, virtual false, abstract: false, final false
inline void SetWebViewForInitialization(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method Update, addr 0x16da0ec, size 0x40, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method WaitUntilInitialized, addr 0x16d606c, size 0x144, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitUntilInitialized() ;

/// @brief Method WebView_ConsoleMessageLogged, addr 0x16da3a0, size 0x124, virtual false, abstract: false, final false
inline void WebView_ConsoleMessageLogged(::System::Object*  sender, ::Vuplex::WebView::ConsoleMessageEventArgs*  eventArgs) ;

/// @brief Method WebView_TextureChanged, addr 0x16da4c4, size 0xf8, virtual false, abstract: false, final false
inline void WebView_TextureChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*  eventArgs) ;

/// @brief Method <_attachWebViewEventHandlers>b__80_0, addr 0x16da600, size 0x50, virtual false, abstract: false, final false
inline void __attachWebViewEventHandlers_b__80_0(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*  eventArgs) ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>* const& __cordl_internal_get_Clicked() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*& __cordl_internal_get_Clicked() ;

constexpr bool const& __cordl_internal_get_ClickingEnabled() const;

constexpr bool& __cordl_internal_get_ClickingEnabled() ;

constexpr bool const& __cordl_internal_get_CursorIconsEnabled() const;

constexpr bool& __cordl_internal_get_CursorIconsEnabled() ;

constexpr ::Vuplex::WebView::DragMode const& __cordl_internal_get_DragMode() const;

constexpr ::Vuplex::WebView::DragMode& __cordl_internal_get_DragMode() ;

constexpr float_t const& __cordl_internal_get_DragThreshold() const;

constexpr float_t& __cordl_internal_get_DragThreshold() ;

constexpr bool const& __cordl_internal_get_HoveringEnabled() const;

constexpr bool& __cordl_internal_get_HoveringEnabled() ;

constexpr ::StringW const& __cordl_internal_get_InitialUrl() const;

constexpr ::StringW& __cordl_internal_get_InitialUrl() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_Initialized() const;

constexpr ::System::EventHandler*& __cordl_internal_get_Initialized() ;

constexpr bool const& __cordl_internal_get_KeyboardEnabled() const;

constexpr bool& __cordl_internal_get_KeyboardEnabled() ;

constexpr bool const& __cordl_internal_get_LogConsoleMessages() const;

constexpr bool& __cordl_internal_get_LogConsoleMessages() ;

constexpr float_t const& __cordl_internal_get_PixelDensity() const;

constexpr float_t& __cordl_internal_get_PixelDensity() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_PointerEntered() const;

constexpr ::System::EventHandler*& __cordl_internal_get_PointerEntered() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_PointerExited() const;

constexpr ::System::EventHandler*& __cordl_internal_get_PointerExited() ;

constexpr bool const& __cordl_internal_get_RemoteDebuggingEnabled() const;

constexpr bool& __cordl_internal_get_RemoteDebuggingEnabled() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>* const& __cordl_internal_get_Scrolled() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*& __cordl_internal_get_Scrolled() ;

constexpr bool const& __cordl_internal_get_ScrollingEnabled() const;

constexpr bool& __cordl_internal_get_ScrollingEnabled() ;

constexpr float_t const& __cordl_internal_get__DragToScrollThreshold_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DragToScrollThreshold_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__appliedResolution() const;

constexpr float_t& __cordl_internal_get__appliedResolution() ;

constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> const& __cordl_internal_get__cachedVideoLayer() const;

constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>& __cordl_internal_get__cachedVideoLayer() ;

constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> const& __cordl_internal_get__cachedView() const;

constexpr ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>& __cordl_internal_get__cachedView() ;

constexpr ::Vuplex::WebView::IWebView* const& __cordl_internal_get__cachedWebView() const;

constexpr ::Vuplex::WebView::IWebView*& __cordl_internal_get__cachedWebView() ;

constexpr bool const& __cordl_internal_get__consoleMessageLoggedHandlerAttached() const;

constexpr bool& __cordl_internal_get__consoleMessageLoggedHandlerAttached() ;

constexpr bool const& __cordl_internal_get__dragThresholdReached() const;

constexpr bool& __cordl_internal_get__dragThresholdReached() ;

constexpr bool const& __cordl_internal_get__dragToScrollClickIsPending() const;

constexpr bool& __cordl_internal_get__dragToScrollClickIsPending() ;

constexpr bool const& __cordl_internal_get__hasOverriddenCursorIcon() const;

constexpr bool& __cordl_internal_get__hasOverriddenCursorIcon() ;

constexpr bool const& __cordl_internal_get__keyboardHasBeenEnabled() const;

constexpr bool& __cordl_internal_get__keyboardHasBeenEnabled() ;

constexpr bool const& __cordl_internal_get__loggedDragWarning() const;

constexpr bool& __cordl_internal_get__loggedDragWarning() ;

constexpr ::Vuplex::WebView::WebViewOptions const& __cordl_internal_get__options() const;

constexpr ::Vuplex::WebView::WebViewOptions& __cordl_internal_get__options() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__pointerDownNormalizedPoint() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__pointerDownNormalizedPoint() ;

constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get__pointerInputDetectorMonoBehaviour() const;

constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get__pointerInputDetectorMonoBehaviour() ;

constexpr bool const& __cordl_internal_get__pointerIsDown() const;

constexpr bool& __cordl_internal_get__pointerIsDown() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__previousMovePointerPoint() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__previousMovePointerPoint() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__previousNormalizedDragPoint() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__previousNormalizedDragPoint() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__sizeInUnityUnits() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__sizeInUnityUnits() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__videoMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__videoMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__viewMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__viewMaterial() ;

constexpr bool const& __cordl_internal_get__visible() const;

constexpr bool& __cordl_internal_get__visible() ;

constexpr ::Vuplex::WebView::IWebView* const& __cordl_internal_get__webViewForInitialization() const;

constexpr ::Vuplex::WebView::IWebView*& __cordl_internal_get__webViewForInitialization() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__webViewGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__webViewGameObject() ;

constexpr void __cordl_internal_set_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_ClickingEnabled(bool  value) ;

constexpr void __cordl_internal_set_CursorIconsEnabled(bool  value) ;

constexpr void __cordl_internal_set_DragMode(::Vuplex::WebView::DragMode  value) ;

constexpr void __cordl_internal_set_DragThreshold(float_t  value) ;

constexpr void __cordl_internal_set_HoveringEnabled(bool  value) ;

constexpr void __cordl_internal_set_InitialUrl(::StringW  value) ;

constexpr void __cordl_internal_set_Initialized(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_KeyboardEnabled(bool  value) ;

constexpr void __cordl_internal_set_LogConsoleMessages(bool  value) ;

constexpr void __cordl_internal_set_PixelDensity(float_t  value) ;

constexpr void __cordl_internal_set_PointerEntered(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_PointerExited(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_RemoteDebuggingEnabled(bool  value) ;

constexpr void __cordl_internal_set_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

constexpr void __cordl_internal_set_ScrollingEnabled(bool  value) ;

constexpr void __cordl_internal_set__DragToScrollThreshold_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__appliedResolution(float_t  value) ;

constexpr void __cordl_internal_set__cachedVideoLayer(::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  value) ;

constexpr void __cordl_internal_set__cachedView(::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  value) ;

constexpr void __cordl_internal_set__cachedWebView(::Vuplex::WebView::IWebView*  value) ;

constexpr void __cordl_internal_set__consoleMessageLoggedHandlerAttached(bool  value) ;

constexpr void __cordl_internal_set__dragThresholdReached(bool  value) ;

constexpr void __cordl_internal_set__dragToScrollClickIsPending(bool  value) ;

constexpr void __cordl_internal_set__hasOverriddenCursorIcon(bool  value) ;

constexpr void __cordl_internal_set__keyboardHasBeenEnabled(bool  value) ;

constexpr void __cordl_internal_set__loggedDragWarning(bool  value) ;

constexpr void __cordl_internal_set__options(::Vuplex::WebView::WebViewOptions  value) ;

constexpr void __cordl_internal_set__pointerDownNormalizedPoint(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__pointerInputDetectorMonoBehaviour(::UnityW<::UnityEngine::MonoBehaviour>  value) ;

constexpr void __cordl_internal_set__pointerIsDown(bool  value) ;

constexpr void __cordl_internal_set__previousMovePointerPoint(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__previousNormalizedDragPoint(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__sizeInUnityUnits(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__videoMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__viewMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__visible(bool  value) ;

constexpr void __cordl_internal_set__webViewForInitialization(::Vuplex::WebView::IWebView*  value) ;

constexpr void __cordl_internal_set__webViewGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method <_initWebView>b__95_0, addr 0x16da650, size 0xac, virtual false, abstract: false, final false
inline void __initWebView_b__95_0(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs) ;

/// @brief Method _attachWebViewEventHandlers, addr 0x16d7b60, size 0x1f8, virtual false, abstract: false, final false
inline void _attachWebViewEventHandlers(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method .ctor, addr 0x16da5cc, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _disableHoveringIfNeeded, addr 0x16d7e64, size 0x4, virtual false, abstract: false, final false
inline void _disableHoveringIfNeeded(bool  preferNative2DMode) ;

/// @brief Method _enableConsoleMessagesIfNeeded, addr 0x16d7d58, size 0x10c, virtual false, abstract: false, final false
inline void _enableConsoleMessagesIfNeeded(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method _enableNativeOnScreenKeyboardIfNeeded, addr 0x16d7e68, size 0x100, virtual false, abstract: false, final false
inline void _enableNativeOnScreenKeyboardIfNeeded(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method _enableOrDisableKeyboardIfNeeded, addr 0x16d7f68, size 0x50, virtual false, abstract: false, final false
inline void _enableOrDisableKeyboardIfNeeded() ;

/// @brief Method _enableRemoteDebuggingIfNeeded, addr 0x16d7fb8, size 0x148, virtual false, abstract: false, final false
inline void _enableRemoteDebuggingIfNeeded() ;

/// @brief Method _getNativeOnScreenKeyboardEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool _getNativeOnScreenKeyboardEnabled() ;

/// @brief Method _getResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t _getResolution() ;

/// @brief Method _getScrollingSensitivity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t _getScrollingSensitivity() ;

/// @brief Method _getTouchIfSupported, addr 0x16d8240, size 0xec, virtual false, abstract: false, final false
inline ::Vuplex::WebView::IWithTouch* _getTouchIfSupported() ;

/// @brief Method _getVideoLayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> _getVideoLayer() ;

/// @brief Method _getView, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> _getView() ;

/// @brief Method _handleTrialExpired, addr 0x16d832c, size 0xe8, virtual false, abstract: false, final false
inline void _handleTrialExpired() ;

/// @brief Method _initBase, addr 0x16d8414, size 0x100, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _initBase(::UnityEngine::Rect  rect, bool  preferNative2DMode) ;

/// @brief Method _initPointerInputDetector, addr 0x16d6e94, size 0xaa0, virtual false, abstract: false, final false
inline void _initPointerInputDetector(::Vuplex::WebView::IWebView*  webView, ::Vuplex::WebView::IPointerInputDetector*  previousPointerInputDetector) ;

/// @brief Method _initViews, addr 0x16d8514, size 0x264, virtual false, abstract: false, final false
inline void _initViews(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method _initWebView, addr 0x16d8a4c, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Vuplex::WebView::IWebView*>* _initWebView(::UnityEngine::Rect  rect, bool  preferNative2DMode) ;

/// @brief Method _movePointerIfNeeded, addr 0x16d8ea4, size 0x114, virtual false, abstract: false, final false
inline void _movePointerIfNeeded(::UnityEngine::Vector2  point, bool  pointerLeave) ;

/// @brief Method _native2DModeEnabled, addr 0x16d8778, size 0xd8, virtual false, abstract: false, final false
inline bool _native2DModeEnabled(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method _resizeWebViewIfNeeded, addr 0x16d9e48, size 0x1c4, virtual false, abstract: false, final false
inline void _resizeWebViewIfNeeded() ;

/// @brief Method _scrollIfNeeded, addr 0x16d8fb8, size 0x1b0, virtual false, abstract: false, final false
inline void _scrollIfNeeded(::UnityEngine::Vector2  scrollDelta, ::UnityEngine::Vector2  point) ;

/// @brief Method _setVideoLayerPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void _setVideoLayerPosition(::UnityEngine::Rect  videoRect) ;

/// @brief Method _setVideoRect, addr 0x16d8850, size 0x1fc, virtual false, abstract: false, final false
inline void _setVideoRect(::UnityEngine::Rect  videoRect) ;

/// @brief Method _throwExceptionIfInitialized, addr 0x16da090, size 0x5c, virtual false, abstract: false, final false
inline void _throwExceptionIfInitialized() ;

/// @brief Method _updatePixelDensityIfNeeded, addr 0x16da1d0, size 0x1d0, virtual false, abstract: false, final false
inline void _updatePixelDensityIfNeeded(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method _updateResolutionIfNeeded, addr 0x16da12c, size 0xa4, virtual false, abstract: false, final false
inline void _updateResolutionIfNeeded() ;

/// @brief Method add_Clicked, addr 0x16d620c, size 0xb0, virtual true, abstract: false, final false
inline void add_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value) ;

/// @brief Method add_Initialized, addr 0x16d636c, size 0x9c, virtual false, abstract: false, final false
inline void add_Initialized(::System::EventHandler*  value) ;

/// @brief Method add_PointerEntered, addr 0x16d64a4, size 0x9c, virtual false, abstract: false, final false
inline void add_PointerEntered(::System::EventHandler*  value) ;

/// @brief Method add_PointerExited, addr 0x16d65dc, size 0x9c, virtual false, abstract: false, final false
inline void add_PointerExited(::System::EventHandler*  value) ;

/// @brief Method add_Scrolled, addr 0x16d6714, size 0xb0, virtual true, abstract: false, final false
inline void add_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

static inline bool getStaticF__loggedHoverWarning() ;

static inline bool getStaticF__remoteDebuggingEnabled() ;

/// @brief Method get_DragToScrollThreshold, addr 0x16da5bc, size 0x8, virtual false, abstract: false, final false
inline float_t get_DragToScrollThreshold() ;

/// @brief Method get_Material, addr 0x16d6874, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_Visible, addr 0x16d6944, size 0x8, virtual true, abstract: false, final false
inline bool get_Visible() ;

/// @brief Method get_WebView, addr 0x16d5520, size 0xa4, virtual false, abstract: false, final false
inline ::Vuplex::WebView::IWebView* get_WebView() ;

/// @brief Method get__heightInPixels, addr 0x16d7a5c, size 0x28, virtual false, abstract: false, final false
inline int32_t get__heightInPixels() ;

/// @brief Method get__pointerInputDetector, addr 0x16d6d4c, size 0x48, virtual false, abstract: false, final false
inline ::Vuplex::WebView::IPointerInputDetector* get__pointerInputDetector() ;

/// @brief Method get__videoLayer, addr 0x16d6a70, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> get__videoLayer() ;

/// @brief Method get__videoLayerIsEnabled, addr 0x16d69cc, size 0xa4, virtual false, abstract: false, final false
inline bool get__videoLayerIsEnabled() ;

/// @brief Method get__view, addr 0x16d6894, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> get__view() ;

/// @brief Method get__widthInPixels, addr 0x16d7b38, size 0x28, virtual false, abstract: false, final false
inline int32_t get__widthInPixels() ;

/// @brief Method remove_Clicked, addr 0x16d62bc, size 0xb0, virtual true, abstract: false, final false
inline void remove_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value) ;

/// @brief Method remove_Initialized, addr 0x16d6408, size 0x9c, virtual false, abstract: false, final false
inline void remove_Initialized(::System::EventHandler*  value) ;

/// @brief Method remove_PointerEntered, addr 0x16d6540, size 0x9c, virtual false, abstract: false, final false
inline void remove_PointerEntered(::System::EventHandler*  value) ;

/// @brief Method remove_PointerExited, addr 0x16d6678, size 0x9c, virtual false, abstract: false, final false
inline void remove_PointerExited(::System::EventHandler*  value) ;

/// @brief Method remove_Scrolled, addr 0x16d67c4, size 0xb0, virtual true, abstract: false, final false
inline void remove_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

static inline void setStaticF__loggedHoverWarning(bool  value) ;

static inline void setStaticF__remoteDebuggingEnabled(bool  value) ;

/// @brief Method set_DragToScrollThreshold, addr 0x16da5c4, size 0x8, virtual false, abstract: false, final false
inline void set_DragToScrollThreshold(float_t  value) ;

/// @brief Method set_Material, addr 0x16d691c, size 0x28, virtual false, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_Visible, addr 0x16d694c, size 0x80, virtual true, abstract: false, final false
inline void set_Visible(bool  value) ;

/// @brief Method set_WebView, addr 0x16d6af8, size 0x118, virtual false, abstract: false, final false
inline void set_WebView(::Vuplex::WebView::IWebView*  value) ;

/// @brief Method set__pointerInputDetector, addr 0x16d6d94, size 0x100, virtual false, abstract: false, final false
inline void set__pointerInputDetector(::Vuplex::WebView::IPointerInputDetector*  value) ;

/// @brief Method set__videoLayerIsEnabled, addr 0x16d7a84, size 0xb4, virtual false, abstract: false, final false
inline void set__videoLayerIsEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebViewPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebViewPrefab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebViewPrefab(BaseWebViewPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebViewPrefab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebViewPrefab(BaseWebViewPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{125};

/// @brief Field Clicked, offset: 0x20, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  ___Clicked;

/// @brief Field Initialized, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler*  ___Initialized;

/// @brief Field PointerEntered, offset: 0x30, size: 0x8, def value: None
 ::System::EventHandler*  ___PointerEntered;

/// @brief Field PointerExited, offset: 0x38, size: 0x8, def value: None
 ::System::EventHandler*  ___PointerExited;

/// @brief Field Scrolled, offset: 0x40, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  ___Scrolled;

/// @brief Field ClickingEnabled, offset: 0x48, size: 0x1, def value: None
 bool  ___ClickingEnabled;

/// @brief Field CursorIconsEnabled, offset: 0x49, size: 0x1, def value: None
 bool  ___CursorIconsEnabled;

/// @brief Field DragMode, offset: 0x4c, size: 0x4, def value: None
 ::Vuplex::WebView::DragMode  ___DragMode;

/// @brief Field DragThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___DragThreshold;

/// @brief Field HoveringEnabled, offset: 0x54, size: 0x1, def value: None
 bool  ___HoveringEnabled;

/// @brief Field InitialUrl, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___InitialUrl;

/// @brief Field KeyboardEnabled, offset: 0x60, size: 0x1, def value: None
 bool  ___KeyboardEnabled;

/// @brief Field LogConsoleMessages, offset: 0x61, size: 0x1, def value: None
 bool  ___LogConsoleMessages;

/// @brief Field PixelDensity, offset: 0x64, size: 0x4, def value: None
 float_t  ___PixelDensity;

/// @brief Field RemoteDebuggingEnabled, offset: 0x68, size: 0x1, def value: None
 bool  ___RemoteDebuggingEnabled;

/// @brief Field ScrollingEnabled, offset: 0x69, size: 0x1, def value: None
 bool  ___ScrollingEnabled;

/// @brief Field _appliedResolution, offset: 0x6c, size: 0x4, def value: None
 float_t  ____appliedResolution;

/// @brief Field _cachedVideoLayer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  ____cachedVideoLayer;

/// @brief Field _cachedView, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView>  ____cachedView;

/// @brief Field _cachedWebView, offset: 0x80, size: 0x8, def value: None
 ::Vuplex::WebView::IWebView*  ____cachedWebView;

/// @brief Field _consoleMessageLoggedHandlerAttached, offset: 0x88, size: 0x1, def value: None
 bool  ____consoleMessageLoggedHandlerAttached;

/// @brief Field _dragThresholdReached, offset: 0x89, size: 0x1, def value: None
 bool  ____dragThresholdReached;

/// @brief Field _dragToScrollClickIsPending, offset: 0x8a, size: 0x1, def value: None
 bool  ____dragToScrollClickIsPending;

/// @brief Field _hasOverriddenCursorIcon, offset: 0x8b, size: 0x1, def value: None
 bool  ____hasOverriddenCursorIcon;

/// @brief Field _keyboardHasBeenEnabled, offset: 0x8c, size: 0x1, def value: None
 bool  ____keyboardHasBeenEnabled;

/// @brief Field _loggedDragWarning, offset: 0x8d, size: 0x1, def value: None
 bool  ____loggedDragWarning;

/// @brief Field _options, offset: 0x90, size: 0x10, def value: None
 ::Vuplex::WebView::WebViewOptions  ____options;

/// @brief Field _pointerInputDetectorMonoBehaviour, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  ____pointerInputDetectorMonoBehaviour;

/// @brief Field _pointerIsDown, offset: 0xa8, size: 0x1, def value: None
 bool  ____pointerIsDown;

/// @brief Field _pointerDownNormalizedPoint, offset: 0xac, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____pointerDownNormalizedPoint;

/// @brief Field _previousNormalizedDragPoint, offset: 0xb4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____previousNormalizedDragPoint;

/// @brief Field _previousMovePointerPoint, offset: 0xbc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____previousMovePointerPoint;

/// @brief Field _sizeInUnityUnits, offset: 0xc4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____sizeInUnityUnits;

/// @brief Field _videoMaterial, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____videoMaterial;

/// @brief Field _viewMaterial, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____viewMaterial;

/// @brief Field _visible, offset: 0xe0, size: 0x1, def value: None
 bool  ____visible;

/// @brief Field _webViewForInitialization, offset: 0xe8, size: 0x8, def value: None
 ::Vuplex::WebView::IWebView*  ____webViewForInitialization;

/// @brief Field _webViewGameObject, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____webViewGameObject;

/// @brief Field <DragToScrollThreshold>k__BackingField, offset: 0xf8, size: 0x4, def value: None
 float_t  ____DragToScrollThreshold_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___Clicked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___Initialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___PointerEntered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___PointerExited) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___Scrolled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___ClickingEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___CursorIconsEnabled) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___DragMode) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___DragThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___HoveringEnabled) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___InitialUrl) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___KeyboardEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___LogConsoleMessages) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___PixelDensity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___RemoteDebuggingEnabled) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ___ScrollingEnabled) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____appliedResolution) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____cachedVideoLayer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____cachedView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____cachedWebView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____consoleMessageLoggedHandlerAttached) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____dragThresholdReached) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____dragToScrollClickIsPending) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____hasOverriddenCursorIcon) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____keyboardHasBeenEnabled) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____loggedDragWarning) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____options) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____pointerInputDetectorMonoBehaviour) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____pointerIsDown) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____pointerDownNormalizedPoint) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____previousNormalizedDragPoint) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____previousMovePointerPoint) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____sizeInUnityUnits) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____videoMaterial) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____viewMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____visible) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____webViewForInitialization) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____webViewGameObject) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::BaseWebViewPrefab, ____DragToScrollThreshold_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::BaseWebViewPrefab, 0x100>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::BaseWebViewPrefab);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::BaseWebViewPrefab*, "Vuplex.WebView", "BaseWebViewPrefab");
NEED_NO_BOX(::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::BaseWebViewPrefab___c__DisplayClass41_0*, "Vuplex.WebView", "BaseWebViewPrefab/<>c__DisplayClass41_0");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::BaseWebViewPrefab___initBase_d__93, "Vuplex.WebView", "BaseWebViewPrefab/<_initBase>d__93");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::BaseWebViewPrefab___initWebView_d__95, "Vuplex.WebView", "BaseWebViewPrefab/<_initWebView>d__95");
