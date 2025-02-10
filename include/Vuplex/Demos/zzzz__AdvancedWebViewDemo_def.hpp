#pragma once
// IWYU pragma private; include "Vuplex/Demos/AdvancedWebViewDemo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedWebViewDemo)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
namespace Vuplex::Demos {
struct AdvancedWebViewDemo__Start_d__2;
}
namespace Vuplex::Demos {
struct AdvancedWebViewDemo___refreshBackForwardState_d__3;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
namespace Vuplex::WebView {
class UrlChangedEventArgs;
}
namespace Vuplex::WebView {
class WebViewPrefab;
}
// Forward declare root types
namespace Vuplex::Demos {
class AdvancedWebViewDemo;
}
namespace Vuplex::Demos {
struct AdvancedWebViewDemo__Start_d__2;
}
namespace Vuplex::Demos {
struct AdvancedWebViewDemo___refreshBackForwardState_d__3;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::Demos::AdvancedWebViewDemo);
MARK_VAL_T(::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2);
MARK_VAL_T(::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::Demos {
// Is value type: true
// CS Name: Vuplex.Demos.AdvancedWebViewDemo/<Start>d__2
struct CORDL_TYPE AdvancedWebViewDemo__Start_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16c5f2c, size 0x9e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16c690c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AdvancedWebViewDemo__Start_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::Demos::AdvancedWebViewDemo>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr AdvancedWebViewDemo__Start_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::Demos::AdvancedWebViewDemo>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{75};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::Demos::AdvancedWebViewDemo>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Vuplex::Demos {
// Is value type: true
// CS Name: Vuplex.Demos.AdvancedWebViewDemo/<_refreshBackForwardState>d__3
struct CORDL_TYPE AdvancedWebViewDemo___refreshBackForwardState_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16c6918, size 0x5a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16c6eb8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AdvancedWebViewDemo___refreshBackForwardState_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::Demos::AdvancedWebViewDemo>", modifiers: "", def_value: None }, CppParam { name: "_canGoBack_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr AdvancedWebViewDemo___refreshBackForwardState_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::Demos::AdvancedWebViewDemo>  __4__this, bool  _canGoBack_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{76};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::Demos::AdvancedWebViewDemo>  __4__this;

/// @brief Field <canGoBack>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _canGoBack_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3, _canGoBack_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3, 0x40>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.AdvancedWebViewDemo
class CORDL_TYPE AdvancedWebViewDemo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__2 = ::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2;

using __refreshBackForwardState_d__3 = ::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3;

/// @brief Field controlsWebViewPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlsWebViewPrefab, put=__cordl_internal_set_controlsWebViewPrefab)) ::UnityW<::Vuplex::WebView::WebViewPrefab>  controlsWebViewPrefab;

/// @brief Field mainWebViewPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainWebViewPrefab, put=__cordl_internal_set_mainWebViewPrefab)) ::UnityW<::Vuplex::WebView::WebViewPrefab>  mainWebViewPrefab;

/// @brief Method Controls_MessageEmitted, addr 0x16c5b58, size 0x244, virtual false, abstract: false, final false
inline void Controls_MessageEmitted(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs) ;

static inline ::Vuplex::Demos::AdvancedWebViewDemo* New_ctor() ;

/// @brief Method Start, addr 0x16c5a3c, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method <Start>b__2_0, addr 0x16c5ec4, size 0x68, virtual false, abstract: false, final false
inline void _Start_b__2_0(::System::Object*  sender, ::Vuplex::WebView::UrlChangedEventArgs*  eventArgs) ;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab> const& __cordl_internal_get_controlsWebViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab>& __cordl_internal_get_controlsWebViewPrefab() ;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab> const& __cordl_internal_get_mainWebViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab>& __cordl_internal_get_mainWebViewPrefab() ;

constexpr void __cordl_internal_set_controlsWebViewPrefab(::UnityW<::Vuplex::WebView::WebViewPrefab>  value) ;

constexpr void __cordl_internal_set_mainWebViewPrefab(::UnityW<::Vuplex::WebView::WebViewPrefab>  value) ;

/// @brief Method .ctor, addr 0x16c5ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _refreshBackForwardState, addr 0x16c5acc, size 0x8c, virtual false, abstract: false, final false
inline void _refreshBackForwardState() ;

/// @brief Method _setDisplayedUrl, addr 0x16c5d9c, size 0x120, virtual false, abstract: false, final false
inline void _setDisplayedUrl(::StringW  url) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancedWebViewDemo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancedWebViewDemo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedWebViewDemo(AdvancedWebViewDemo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedWebViewDemo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedWebViewDemo(AdvancedWebViewDemo const& ) = delete;

/// @brief Field CONTROLS_HTML offset 0xffffffff size 0x8
static constexpr ::ConstString  CONTROLS_HTML{u"\r\n            <!DOCTYPE html>\r\n            <html>\r\n                <head>\r\n                    <!-- This transparent meta tag instructs 3D WebView to allow the page to be transparent. -->\r\n                    <meta name=\'transparent\' content=\'true\'>\r\n                    <meta charset=\'UTF-8\'>\r\n                    <style>\r\n                        body {\r\n                            font-family: Helvetica, Arial, Sans-Serif;\r\n                            margin: 0;\r\n                            height: 100vh;\r\n                            color: white;\r\n                        }\r\n                        .controls {\r\n                            display: flex;\r\n                            justify-content: space-between;\r\n                            align-items: center;\r\n                            height: 100%;\r\n                        }\r\n                        .controls > div {\r\n                            background-color: #283237;\r\n                            border-radius: 8px;\r\n                            height: 100%;\r\n                        }\r\n                        .url-display {\r\n                            flex: 0 0 75%;\r\n                            width: 75%;\r\n                            display: flex;\r\n                            align-items: center;\r\n                            overflow: hidden;\r\n                            cursor: default;\r\n                        }\r\n                        #url {\r\n                            width: 100%;\r\n                            white-space: nowrap;\r\n                            overflow: hidden;\r\n                            text-overflow: ellipsis;\r\n                            padding: 0 15px;\r\n                            font-size: 18px;\r\n                        }\r\n                        .buttons {\r\n                            flex: 0 0 20%;\r\n                            width: 20%;\r\n                            display: flex;\r\n                            justify-content: space-around;\r\n                            align-items: center;\r\n                        }\r\n                        .buttons > button {\r\n                            font-size: 40px;\r\n                            background: none;\r\n                            border: none;\r\n                            outline: none;\r\n                            color: white;\r\n                            margin: 0;\r\n                            padding: 0;\r\n                        }\r\n                        .buttons > button:disabled {\r\n                            color: rgba(255, 255, 255, 0.3);\r\n                        }\r\n                        .buttons > button:last-child {\r\n                            transform: scaleX(-1);\r\n                        }\r\n                        /* For Gecko only, set the background color\r\n                        to black so that the shader\'s cutout rect\r\n                        can translate the black pixels to transparent.*/\r\n                        @supports (-moz-appearance:none) {\r\n                            body {\r\n                                background-color: black;\r\n                            }\r\n                        }\r\n                    </style>\r\n                </head>\r\n                <body>\r\n                    <div class=\'controls\'>\r\n                        <div class=\'url-display\'>\r\n                            <div id=\'url\'></div>\r\n                        </div>\r\n                        <div class=\'buttons\'>\r\n                            <button id=\'back-button\' disabled=\'true\' onclick=\'vuplex.postMessage(\"GO_BACK\")\'>\u{2190}</button>\r\n                            <button id=\'forward-button\' disabled=\'true\' onclick=\'vuplex.postMessage(\"GO_FORWARD\")\'>\u{2190}</button>\r\n                        </div>\r\n                    </div>\r\n                    <script>\r\n                        // Handle messages sent from C#\r\n                        function handleMessage(message) {\r\n                            var data = JSON.parse(message.data);\r\n                            if (data.type === \'SET_URL\') {\r\n                                document.getElementById(\'url\').innerText = data.url;\r\n                            } else if (data.type === \'SET_BUTTONS\') {\r\n                                document.getElementById(\'back-button\').disabled = !data.canGoBack;\r\n                                document.getElementById(\'forward-button\').disabled = !data.canGoForward;\r\n                            }\r\n                        }\r\n\r\n                        function attachMessageListener() {\r\n                            window.vuplex.addEventListener(\'message\', handleMessage);\r\n                            window.vuplex.postMessage(\'CONTROLS_INITIALIZED\');\r\n                        }\r\n\r\n                        if (window.vuplex) {\r\n                            attachMessageListener();\r\n                        } else {\r\n                            window.addEventListener(\'vuplexready\', attachMessageListener);\r\n                        }\r\n                    </script>\r\n                </body>\r\n            </html>\r\n        "};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{77};

/// @brief Field controlsWebViewPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::WebViewPrefab>  ___controlsWebViewPrefab;

/// @brief Field mainWebViewPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::WebViewPrefab>  ___mainWebViewPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo, ___controlsWebViewPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::AdvancedWebViewDemo, ___mainWebViewPrefab) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::AdvancedWebViewDemo, 0x30>, "Size mismatch!");

} // namespace end def Vuplex::Demos
NEED_NO_BOX(::Vuplex::Demos::AdvancedWebViewDemo);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::AdvancedWebViewDemo*, "Vuplex.Demos", "AdvancedWebViewDemo");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::AdvancedWebViewDemo__Start_d__2, "Vuplex.Demos", "AdvancedWebViewDemo/<Start>d__2");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::AdvancedWebViewDemo___refreshBackForwardState_d__3, "Vuplex.Demos", "AdvancedWebViewDemo/<_refreshBackForwardState>d__3");
