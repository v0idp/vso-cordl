#pragma once
// IWYU pragma private; include "Vuplex/WebView/WebViewPrefab.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Vuplex/WebView/zzzz__BaseWebViewPrefab_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebViewPrefab)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace Vuplex::WebView::Internal {
class ViewportMaterialView;
}
namespace Vuplex::WebView {
class IWebView;
}
namespace Vuplex::WebView {
struct WebViewOptions;
}
namespace Vuplex::WebView {
struct WebViewPrefab___initWebViewPrefab_d__20;
}
// Forward declare root types
namespace Vuplex::WebView {
class WebViewPrefab;
}
namespace Vuplex::WebView {
struct WebViewPrefab___initWebViewPrefab_d__20;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::WebViewPrefab);
MARK_VAL_T(::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.WebViewPrefab/<_initWebViewPrefab>d__20
struct CORDL_TYPE WebViewPrefab___initWebViewPrefab_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16e5ad0, size 0x414, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16e5ee4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebViewPrefab___initWebViewPrefab_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::WebViewPrefab>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr WebViewPrefab___initWebViewPrefab_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::WebViewPrefab>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::WebViewPrefab>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies UnityEngine.Vector2, Vuplex.WebView.BaseWebViewPrefab
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.WebViewPrefab
class CORDL_TYPE WebViewPrefab : public ::Vuplex::WebView::BaseWebViewPrefab {
public:
// Declarations
using __initWebViewPrefab_d__20 = ::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20;

 __declspec(property(get=get_Collider)) ::UnityW<::UnityEngine::Collider>  Collider;

 __declspec(property(get=get_InitialResolution, put=set_InitialResolution)) float_t  InitialResolution;

/// @brief Field NativeOnScreenKeyboardEnabled, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_NativeOnScreenKeyboardEnabled, put=__cordl_internal_set_NativeOnScreenKeyboardEnabled)) bool  NativeOnScreenKeyboardEnabled;

/// @brief Field Resolution, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_Resolution, put=__cordl_internal_set_Resolution)) float_t  Resolution;

/// @brief Field ScrollSensitivity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScrollSensitivity, put=setStaticF_ScrollSensitivity)) float_t  ScrollSensitivity;

/// @brief Field ScrollingSensitivity, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScrollingSensitivity, put=__cordl_internal_set_ScrollingSensitivity)) float_t  ScrollingSensitivity;

/// @brief Field _sizeForInitialization, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__sizeForInitialization, put=__cordl_internal_set__sizeForInitialization)) ::UnityEngine::Vector2  _sizeForInitialization;

/// @brief Field _videoRectPositioner, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoRectPositioner, put=__cordl_internal_set__videoRectPositioner)) ::UnityW<::UnityEngine::Transform>  _videoRectPositioner;

/// @brief Field _viewResizer, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__viewResizer, put=__cordl_internal_set__viewResizer)) ::UnityW<::UnityEngine::Transform>  _viewResizer;

/// @brief Method BrowserToScreenPoint, addr 0x16e5080, size 0x234, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 BrowserToScreenPoint(int32_t  xInPixels, int32_t  yInPixels) ;

/// @brief Method ConvertToScreenPoint, addr 0x16e5a1c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ConvertToScreenPoint(::UnityEngine::Vector3  worldPoint) ;

/// @brief Method Init, addr 0x16e5a20, size 0x4, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Init, addr 0x16e5a2c, size 0x4, virtual false, abstract: false, final false
inline void Init(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method Init, addr 0x16e5a24, size 0x4, virtual false, abstract: false, final false
inline void Init(float_t  width, float_t  height) ;

/// @brief Method Init, addr 0x16e5a28, size 0x4, virtual false, abstract: false, final false
inline void Init(float_t  width, float_t  height, ::Vuplex::WebView::WebViewOptions  options) ;

/// @brief Method Instantiate, addr 0x16e52c0, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::WebViewPrefab> Instantiate(::Vuplex::WebView::IWebView*  webView) ;

/// @brief Method Instantiate, addr 0x16e52b4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::WebViewPrefab> Instantiate(float_t  width, float_t  height) ;

/// @brief Method Instantiate, addr 0x16dfeec, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::WebViewPrefab> Instantiate(float_t  width, float_t  height, ::Vuplex::WebView::WebViewOptions  options) ;

static inline ::Vuplex::WebView::WebViewPrefab* New_ctor() ;

/// @brief Method Resize, addr 0x16e53d0, size 0x190, virtual false, abstract: false, final false
inline void Resize(float_t  width, float_t  height) ;

/// @brief Method Start, addr 0x16e5a18, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method WorldToNormalized, addr 0x16e55d0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 WorldToNormalized(::UnityEngine::Vector3  worldPoint) ;

constexpr bool const& __cordl_internal_get_NativeOnScreenKeyboardEnabled() const;

constexpr bool& __cordl_internal_get_NativeOnScreenKeyboardEnabled() ;

constexpr float_t const& __cordl_internal_get_Resolution() const;

constexpr float_t& __cordl_internal_get_Resolution() ;

constexpr float_t const& __cordl_internal_get_ScrollingSensitivity() const;

constexpr float_t& __cordl_internal_get_ScrollingSensitivity() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__sizeForInitialization() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__sizeForInitialization() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__videoRectPositioner() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__videoRectPositioner() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__viewResizer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__viewResizer() ;

constexpr void __cordl_internal_set_NativeOnScreenKeyboardEnabled(bool  value) ;

constexpr void __cordl_internal_set_Resolution(float_t  value) ;

constexpr void __cordl_internal_set_ScrollingSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__sizeForInitialization(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__videoRectPositioner(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__viewResizer(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x16e5a40, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _getNativeOnScreenKeyboardEnabled, addr 0x16e56b8, size 0x8, virtual true, abstract: false, final false
inline bool _getNativeOnScreenKeyboardEnabled() ;

/// @brief Method _getResolution, addr 0x16e5630, size 0x80, virtual true, abstract: false, final false
inline float_t _getResolution() ;

/// @brief Method _getScrollingSensitivity, addr 0x16e56b0, size 0x8, virtual true, abstract: false, final false
inline float_t _getScrollingSensitivity() ;

/// @brief Method _getVideoLayer, addr 0x16e56c0, size 0x9c, virtual true, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> _getVideoLayer() ;

/// @brief Method _getView, addr 0x16e575c, size 0x7c, virtual true, abstract: false, final false
inline ::UnityW<::Vuplex::WebView::Internal::ViewportMaterialView> _getView() ;

/// @brief Method _initWebViewPrefab, addr 0x16e57d8, size 0x90, virtual false, abstract: false, final false
inline void _initWebViewPrefab() ;

/// @brief Method _resetLocalScale, addr 0x16e5868, size 0x120, virtual false, abstract: false, final false
inline void _resetLocalScale() ;

/// @brief Method _setVideoLayerPosition, addr 0x16e5988, size 0x90, virtual true, abstract: false, final false
inline void _setVideoLayerPosition(::UnityEngine::Rect  videoRect) ;

/// @brief Method _setViewSize, addr 0x16e5560, size 0x70, virtual false, abstract: false, final false
inline void _setViewSize(float_t  width, float_t  height) ;

static inline float_t getStaticF_ScrollSensitivity() ;

/// @brief Method get_Collider, addr 0x16e502c, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_Collider() ;

/// @brief Method get_InitialResolution, addr 0x16e5a30, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialResolution() ;

static inline void setStaticF_ScrollSensitivity(float_t  value) ;

/// @brief Method set_InitialResolution, addr 0x16e5a38, size 0x8, virtual false, abstract: false, final false
inline void set_InitialResolution(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebViewPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebViewPrefab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebViewPrefab(WebViewPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebViewPrefab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebViewPrefab(WebViewPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{204};

/// @brief Field NativeOnScreenKeyboardEnabled, offset: 0xfc, size: 0x1, def value: None
 bool  ___NativeOnScreenKeyboardEnabled;

/// @brief Field Resolution, offset: 0x100, size: 0x4, def value: None
 float_t  ___Resolution;

/// @brief Field ScrollingSensitivity, offset: 0x104, size: 0x4, def value: None
 float_t  ___ScrollingSensitivity;

/// @brief Field _sizeForInitialization, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____sizeForInitialization;

/// @brief Field _videoRectPositioner, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____videoRectPositioner;

/// @brief Field _viewResizer, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____viewResizer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::WebViewPrefab, ___NativeOnScreenKeyboardEnabled) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab, ___Resolution) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab, ___ScrollingSensitivity) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab, ____sizeForInitialization) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab, ____videoRectPositioner) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewPrefab, ____viewResizer) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::WebViewPrefab, 0x120>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::WebViewPrefab);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::WebViewPrefab*, "Vuplex.WebView", "WebViewPrefab");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::WebViewPrefab___initWebViewPrefab_d__20, "Vuplex.WebView", "WebViewPrefab/<_initWebViewPrefab>d__20");
