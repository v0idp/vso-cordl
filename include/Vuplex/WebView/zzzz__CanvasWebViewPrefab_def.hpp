#pragma once
// IWYU pragma private; include "Vuplex/WebView/CanvasWebViewPrefab.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "Vuplex/WebView/zzzz__BaseWebViewPrefab_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasWebViewPrefab)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class EventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace Vuplex::WebView::Internal {
template<typename TResult>
class CachingGetter_1;
}
namespace Vuplex::WebView::Internal {
class ViewportMaterialView;
}
namespace Vuplex::WebView {
struct CanvasWebViewPrefab___initCanvasPrefab_d__37;
}
namespace Vuplex::WebView {
class ClickedEventArgs;
}
namespace Vuplex::WebView {
class IWebView;
}
namespace Vuplex::WebView {
class IWithNative2DMode;
}
namespace Vuplex::WebView {
class ScrolledEventArgs;
}
namespace Vuplex::WebView {
struct WebViewOptions;
}
// Forward declare root types
namespace Vuplex::WebView {
class CanvasWebViewPrefab;
}
namespace Vuplex::WebView {
struct CanvasWebViewPrefab___initCanvasPrefab_d__37;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::CanvasWebViewPrefab);
MARK_VAL_T(::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.CanvasWebViewPrefab/<_initCanvasPrefab>d__37
struct CORDL_TYPE CanvasWebViewPrefab___initCanvasPrefab_d__37 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16dd6c8, size 0x41c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16ddae4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CanvasWebViewPrefab___initCanvasPrefab_d__37() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr CanvasWebViewPrefab___initCanvasPrefab_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies Vuplex.WebView.BaseWebViewPrefab
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.CanvasWebViewPrefab
class CORDL_TYPE CanvasWebViewPrefab : public ::Vuplex::WebView::BaseWebViewPrefab {
public:
// Declarations
using __initCanvasPrefab_d__37 = ::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37;

 __declspec(property(get=get_InitialResolution, put=set_InitialResolution)) float_t  InitialResolution;

/// @brief Field Native2DModeEnabled, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_Native2DModeEnabled, put=__cordl_internal_set_Native2DModeEnabled)) bool  Native2DModeEnabled;

/// @brief Field NativeOnScreenKeyboardEnabled, offset 0xfd, size 0x1 
 __declspec(property(get=__cordl_internal_get_NativeOnScreenKeyboardEnabled, put=__cordl_internal_set_NativeOnScreenKeyboardEnabled)) bool  NativeOnScreenKeyboardEnabled;

/// @brief Field Resolution, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_Resolution, put=__cordl_internal_set_Resolution)) float_t  Resolution;

/// @brief Field ScrollingSensitivity, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScrollingSensitivity, put=__cordl_internal_set_ScrollingSensitivity)) float_t  ScrollingSensitivity;

 __declspec(property(get=get_Visible, put=set_Visible)) bool  Visible;

/// @brief Field _cachedRectTransform, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedRectTransform, put=__cordl_internal_set__cachedRectTransform)) ::UnityW<::UnityEngine::RectTransform>  _cachedRectTransform;

 __declspec(property(get=get__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _canvasGetter, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasGetter, put=__cordl_internal_set__canvasGetter)) ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*  _canvasGetter;

 __declspec(property(get=get__native2DModeActive)) bool  _native2DModeActive;

/// @brief Field _native2DModeEnabledAtInitialization, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get__native2DModeEnabledAtInitialization, put=__cordl_internal_set__native2DModeEnabledAtInitialization)) bool  _native2DModeEnabledAtInitialization;

 __declspec(property(get=get__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Method BrowserToScreenPoint, addr 0x16dc37c, size 0x1dc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 BrowserToScreenPoint(int32_t  xInPixels, int32_t  yInPixels) ;

/// @brief Method Init, addr 0x16dd668, size 0x4, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Init, addr 0x16dd66c, size 0x4, virtual false, abstract: false, final false
inline void Init(::Vuplex::WebView::WebViewOptions  options) ;

/// @brief Method Init, addr 0x16dd670, size 0x4, virtual false, abstract: false, final false
inline void Init(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method Instantiate, addr 0x16dc788, size 0xc, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab> Instantiate() ;

/// @brief Method Instantiate, addr 0x16dba10, size 0x108, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab> Instantiate(::Vuplex::WebView::WebViewOptions  options) ;

/// @brief Method Instantiate, addr 0x16dc794, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab> Instantiate(::Vuplex::WebView::IWebView*  webView) ;

static inline ::Vuplex::WebView::CanvasWebViewPrefab* New_ctor() ;

/// @brief Method OnDisable, addr 0x16dd238, size 0xb8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x16dd2f0, size 0xb8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x16dd5f4, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x16dd5f8, size 0x70, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_Native2DModeEnabled() const;

constexpr bool& __cordl_internal_get_Native2DModeEnabled() ;

constexpr bool const& __cordl_internal_get_NativeOnScreenKeyboardEnabled() const;

constexpr bool& __cordl_internal_get_NativeOnScreenKeyboardEnabled() ;

constexpr float_t const& __cordl_internal_get_Resolution() const;

constexpr float_t& __cordl_internal_get_Resolution() ;

constexpr float_t const& __cordl_internal_get_ScrollingSensitivity() const;

constexpr float_t& __cordl_internal_get_ScrollingSensitivity() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__cachedRectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__cachedRectTransform() ;

constexpr ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>* const& __cordl_internal_get__canvasGetter() const;

constexpr ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*& __cordl_internal_get__canvasGetter() ;

constexpr bool const& __cordl_internal_get__native2DModeEnabledAtInitialization() const;

constexpr bool& __cordl_internal_get__native2DModeEnabledAtInitialization() ;

constexpr void __cordl_internal_set_Native2DModeEnabled(bool  value) ;

constexpr void __cordl_internal_set_NativeOnScreenKeyboardEnabled(bool  value) ;

constexpr void __cordl_internal_set_Resolution(float_t  value) ;

constexpr void __cordl_internal_set_ScrollingSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__cachedRectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__canvasGetter(::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*  value) ;

constexpr void __cordl_internal_set__native2DModeEnabledAtInitialization(bool  value) ;

/// @brief Method _canNative2DModeBeEnabled, addr 0x16dca20, size 0xf4, virtual false, abstract: false, final false
inline bool _canNative2DModeBeEnabled(bool  logWarnings) ;

/// @brief Method .ctor, addr 0x16dd684, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _getNative2DWebViewIfActive, addr 0x16dc1fc, size 0xbc, virtual false, abstract: false, final false
inline ::Vuplex::WebView::IWithNative2DMode* _getNative2DWebViewIfActive() ;

/// @brief Method _getNativeOnScreenKeyboardEnabled, addr 0x16dcbb8, size 0x8, virtual true, abstract: false, final false
inline bool _getNativeOnScreenKeyboardEnabled() ;

/// @brief Method _getRectForInitialization, addr 0x16dcb14, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Rect _getRectForInitialization(bool  preferNative2DMode) ;

/// @brief Method _getResolution, addr 0x16dcb3c, size 0x7c, virtual true, abstract: false, final false
inline float_t _getResolution() ;

/// @brief Method _getScreenSpaceRect, addr 0x16dc558, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::Rect _getScreenSpaceRect() ;

/// @brief Method _getScreenSpaceScaleFactor, addr 0x16dcbc8, size 0x160, virtual false, abstract: false, final false
inline float_t _getScreenSpaceScaleFactor() ;

/// @brief Method _getScrollingSensitivity, addr 0x16dcbc0, size 0x8, virtual true, abstract: false, final false
inline float_t _getScrollingSensitivity() ;

/// @brief Method _getVideoLayer, addr 0x16dcd28, size 0xd0, virtual true, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> _getVideoLayer() ;

/// @brief Method _getView, addr 0x16dcdf8, size 0xd0, virtual true, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> _getView() ;

/// @brief Method _initCanvasPrefab, addr 0x16dcec8, size 0x90, virtual false, abstract: false, final false
inline void _initCanvasPrefab() ;

/// @brief Method _logErrorIfNative2DModeEnabledChanged, addr 0x16dcf58, size 0x6c, virtual false, abstract: false, final false
inline void _logErrorIfNative2DModeEnabledChanged() ;

/// @brief Method _logErrorIfSizeIsInvalid, addr 0x16dcfc4, size 0x170, virtual false, abstract: false, final false
inline bool _logErrorIfSizeIsInvalid(::UnityEngine::Vector2  size) ;

/// @brief Method _logNative2DModeWarning, addr 0x16dc084, size 0x58, virtual false, abstract: false, final false
inline void _logNative2DModeWarning(::StringW  message) ;

/// @brief Method _logNative2DRecommendationIfNeeded, addr 0x16dd14c, size 0xec, virtual false, abstract: false, final false
inline void _logNative2DRecommendationIfNeeded(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method _resizeNative2DWebViewIfNeeded, addr 0x16dd3a8, size 0x164, virtual false, abstract: false, final false
inline bool _resizeNative2DWebViewIfNeeded() ;

/// @brief Method _setVideoLayerPosition, addr 0x16dd50c, size 0xe8, virtual true, abstract: false, final false
inline void _setVideoLayerPosition(::UnityEngine::Rect  videoRect) ;

/// @brief Method _sizeIsInvalid, addr 0x16dd134, size 0x18, virtual false, abstract: false, final false
inline bool _sizeIsInvalid(::UnityEngine::Vector2  size) ;

/// @brief Method add_Clicked, addr 0x16dbf6c, size 0x60, virtual true, abstract: false, final false
inline void add_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value) ;

/// @brief Method add_Scrolled, addr 0x16dc0e0, size 0x60, virtual true, abstract: false, final false
inline void add_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

/// @brief Method get_InitialResolution, addr 0x16dd674, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialResolution() ;

/// @brief Method get_Visible, addr 0x16dc144, size 0xb8, virtual true, abstract: false, final false
inline bool get_Visible() ;

/// @brief Method get__canvas, addr 0x16dc8a4, size 0xe8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> get__canvas() ;

/// @brief Method get__native2DModeActive, addr 0x16dbfcc, size 0xb8, virtual false, abstract: false, final false
inline bool get__native2DModeActive() ;

/// @brief Method get__rectTransform, addr 0x16dc98c, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get__rectTransform() ;

/// @brief Method remove_Clicked, addr 0x16dc0dc, size 0x4, virtual true, abstract: false, final false
inline void remove_Clicked(::System::EventHandler_1<::Vuplex::WebView::ClickedEventArgs*>*  value) ;

/// @brief Method remove_Scrolled, addr 0x16dc140, size 0x4, virtual true, abstract: false, final false
inline void remove_Scrolled(::System::EventHandler_1<::Vuplex::WebView::ScrolledEventArgs*>*  value) ;

/// @brief Method set_InitialResolution, addr 0x16dd67c, size 0x8, virtual false, abstract: false, final false
inline void set_InitialResolution(float_t  value) ;

/// @brief Method set_Visible, addr 0x16dc2b8, size 0xc4, virtual true, abstract: false, final false
inline void set_Visible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasWebViewPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasWebViewPrefab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasWebViewPrefab(CanvasWebViewPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasWebViewPrefab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasWebViewPrefab(CanvasWebViewPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{129};

/// @brief Field Native2DModeEnabled, offset: 0xfc, size: 0x1, def value: None
 bool  ___Native2DModeEnabled;

/// @brief Field NativeOnScreenKeyboardEnabled, offset: 0xfd, size: 0x1, def value: None
 bool  ___NativeOnScreenKeyboardEnabled;

/// @brief Field Resolution, offset: 0x100, size: 0x4, def value: None
 float_t  ___Resolution;

/// @brief Field ScrollingSensitivity, offset: 0x104, size: 0x4, def value: None
 float_t  ___ScrollingSensitivity;

/// @brief Field _cachedRectTransform, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____cachedRectTransform;

/// @brief Field _canvasGetter, offset: 0x110, size: 0x8, def value: None
 ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*  ____canvasGetter;

/// @brief Field _native2DModeEnabledAtInitialization, offset: 0x118, size: 0x1, def value: None
 bool  ____native2DModeEnabledAtInitialization;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab, ___Native2DModeEnabled) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab, ___NativeOnScreenKeyboardEnabled) == 0xfd, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab, ___Resolution) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab, ___ScrollingSensitivity) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab, ____cachedRectTransform) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab, ____canvasGetter) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasWebViewPrefab, ____native2DModeEnabledAtInitialization) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::CanvasWebViewPrefab, 0x120>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::CanvasWebViewPrefab);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::CanvasWebViewPrefab*, "Vuplex.WebView", "CanvasWebViewPrefab");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::CanvasWebViewPrefab___initCanvasPrefab_d__37, "Vuplex.WebView", "CanvasWebViewPrefab/<_initCanvasPrefab>d__37");
