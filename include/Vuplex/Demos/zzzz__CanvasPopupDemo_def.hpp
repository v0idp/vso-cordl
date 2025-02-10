#pragma once
// IWYU pragma private; include "Vuplex/Demos/CanvasPopupDemo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasPopupDemo)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace Vuplex::Demos {
struct CanvasPopupDemo__Start_d__0;
}
namespace Vuplex::Demos {
class CanvasPopupDemo___c__DisplayClass0_0;
}
namespace Vuplex::Demos {
class CanvasPopupDemo___c__DisplayClass0_1;
}
namespace Vuplex::Demos {
struct __c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d;
}
namespace Vuplex::WebView {
class CanvasWebViewPrefab;
}
namespace Vuplex::WebView {
class PopupRequestedEventArgs;
}
// Forward declare root types
namespace Vuplex::Demos {
class CanvasPopupDemo;
}
namespace Vuplex::Demos {
class CanvasPopupDemo___c__DisplayClass0_0;
}
namespace Vuplex::Demos {
class CanvasPopupDemo___c__DisplayClass0_1;
}
namespace Vuplex::Demos {
struct CanvasPopupDemo__Start_d__0;
}
namespace Vuplex::Demos {
struct __c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::Demos::CanvasPopupDemo);
MARK_REF_PTR_T(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0);
MARK_REF_PTR_T(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1);
MARK_VAL_T(::Vuplex::Demos::CanvasPopupDemo__Start_d__0);
MARK_VAL_T(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::Demos {
// Is value type: true
// CS Name: Vuplex.Demos.CanvasPopupDemo/<>c__DisplayClass0_0/<<Start>b__0>d
struct CORDL_TYPE __c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16c735c, size 0x648, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16c79ac, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "eventArgs", ty: "::Vuplex::WebView::PopupRequestedEventArgs*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Vuplex::WebView::PopupRequestedEventArgs*  eventArgs, ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0*  __4__this, ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{79};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field eventArgs, offset: 0x28, size: 0x8, def value: None
 ::Vuplex::WebView::PopupRequestedEventArgs*  eventArgs;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0*  __4__this;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1*  __8__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, eventArgs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, 0x48>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies System.Object
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.CanvasPopupDemo/<>c__DisplayClass0_0
class CORDL_TYPE CanvasPopupDemo___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
using __Start_b__0_d = ::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d;

/// @brief Field canvas, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvas, put=__cordl_internal_set_canvas)) ::UnityW<::UnityEngine::GameObject>  canvas;

/// @brief Field mainWebViewPrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainWebViewPrefab, put=__cordl_internal_set_mainWebViewPrefab)) ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  mainWebViewPrefab;

static inline ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <Start>b__0, addr 0x16c72c0, size 0x9c, virtual false, abstract: false, final false
inline void _Start_b__0(::System::Object*  webView, ::Vuplex::WebView::PopupRequestedEventArgs*  eventArgs) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_canvas() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_canvas() ;

constexpr ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab> const& __cordl_internal_get_mainWebViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>& __cordl_internal_get_mainWebViewPrefab() ;

constexpr void __cordl_internal_set_canvas(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_mainWebViewPrefab(::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  value) ;

/// @brief Method .ctor, addr 0x16c72b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasPopupDemo___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasPopupDemo___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasPopupDemo___c__DisplayClass0_0(CanvasPopupDemo___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasPopupDemo___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasPopupDemo___c__DisplayClass0_0(CanvasPopupDemo___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{80};

/// @brief Field mainWebViewPrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  ___mainWebViewPrefab;

/// @brief Field canvas, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___canvas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0, ___mainWebViewPrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0, ___canvas) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies System.Object
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.CanvasPopupDemo/<>c__DisplayClass0_1
class CORDL_TYPE CanvasPopupDemo___c__DisplayClass0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field popupPrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_popupPrefab, put=__cordl_internal_set_popupPrefab)) ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  popupPrefab;

static inline ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1* New_ctor() ;

/// @brief Method <Start>b__1, addr 0x16c79b8, size 0x80, virtual false, abstract: false, final false
inline void _Start_b__1(::System::Object*  popupWebView, ::System::EventArgs*  closeEventArgs) ;

constexpr ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab> const& __cordl_internal_get_popupPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>& __cordl_internal_get_popupPrefab() ;

constexpr void __cordl_internal_set_popupPrefab(::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  value) ;

/// @brief Method .ctor, addr 0x16c79a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasPopupDemo___c__DisplayClass0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasPopupDemo___c__DisplayClass0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasPopupDemo___c__DisplayClass0_1(CanvasPopupDemo___c__DisplayClass0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasPopupDemo___c__DisplayClass0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasPopupDemo___c__DisplayClass0_1(CanvasPopupDemo___c__DisplayClass0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{81};

/// @brief Field popupPrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  ___popupPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1, ___popupPrefab) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::Demos {
// Is value type: true
// CS Name: Vuplex.Demos.CanvasPopupDemo/<Start>d__0
struct CORDL_TYPE CanvasPopupDemo__Start_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16c7a38, size 0x784, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16c81bc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CanvasPopupDemo__Start_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr CanvasPopupDemo__Start_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{82};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0*  __8__1;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::CanvasPopupDemo__Start_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CanvasPopupDemo__Start_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CanvasPopupDemo__Start_d__0, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CanvasPopupDemo__Start_d__0, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CanvasPopupDemo__Start_d__0, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.CanvasPopupDemo
class CORDL_TYPE CanvasPopupDemo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__0 = ::Vuplex::Demos::CanvasPopupDemo__Start_d__0;

using __c__DisplayClass0_0 = ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0;

using __c__DisplayClass0_1 = ::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1;

static inline ::Vuplex::Demos::CanvasPopupDemo* New_ctor() ;

/// @brief Method Start, addr 0x16c7228, size 0x88, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x16c72b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasPopupDemo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasPopupDemo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasPopupDemo(CanvasPopupDemo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasPopupDemo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasPopupDemo(CanvasPopupDemo const& ) = delete;

/// @brief Field NOT_SUPPORTED_HTML offset 0xffffffff size 0x8
static constexpr ::ConstString  NOT_SUPPORTED_HTML{u"\r\n            <body>\r\n                <style>\r\n                    body {\r\n                        font-family: sans-serif;\r\n                        display: flex;\r\n                        justify-content: center;\r\n                        align-items: center;\r\n                        line-height: 1.25;\r\n                    }\r\n                    div {\r\n                        max-width: 80%;\r\n                    }\r\n                    li {\r\n                        margin: 10px 0;\r\n                    }\r\n                </style>\r\n                <div>\r\n                    <p>\r\n                        Sorry, but this 3D WebView package doesn\'t support yet the <a href=\'https://developer.vuplex.com/webview/IWithPopups\'>IWithPopups</a> interface. Current packages that support popups:\r\n                    </p>\r\n                    <ul>\r\n                        <li>\r\n                            <a href=\'https://developer.vuplex.com/webview/StandaloneWebView\'>3D WebView for Windows and macOS</a>\r\n                        </li>\r\n                        <li>\r\n                            <a href=\'https://developer.vuplex.com/webview/AndroidWebView\'>3D WebView for Android</a>\r\n                        </li>\r\n                        <li>\r\n                            <a href=\'https://developer.vuplex.com/webview/AndroidGeckoWebView\'>3D WebView for Android with Gecko Engine</a>\r\n                        </li>\r\n                    </ul>\r\n                </div>\r\n            </body>\r\n        "};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{83};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CanvasPopupDemo, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::Demos
NEED_NO_BOX(::Vuplex::Demos::CanvasPopupDemo);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CanvasPopupDemo*, "Vuplex.Demos", "CanvasPopupDemo");
NEED_NO_BOX(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_0*, "Vuplex.Demos", "CanvasPopupDemo/<>c__DisplayClass0_0");
NEED_NO_BOX(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CanvasPopupDemo___c__DisplayClass0_1*, "Vuplex.Demos", "CanvasPopupDemo/<>c__DisplayClass0_1");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CanvasPopupDemo__Start_d__0, "Vuplex.Demos", "CanvasPopupDemo/<Start>d__0");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::__c__DisplayClass0_0_CanvasPopupDemo___Start_b__0_d, "Vuplex.Demos", "CanvasPopupDemo/<>c__DisplayClass0_0/<<Start>b__0>d");
