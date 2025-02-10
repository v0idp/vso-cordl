#pragma once
// IWYU pragma private; include "Vuplex/WebView/AndroidWebView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__BaseWebView_def.hpp"
#include "Vuplex/WebView/zzzz__IWebView_def.hpp"
#include "Vuplex/WebView/zzzz__IWithChangingTexture_def.hpp"
#include "Vuplex/WebView/zzzz__IWithDeepLinking_def.hpp"
#include "Vuplex/WebView/zzzz__IWithDownloads_def.hpp"
#include "Vuplex/WebView/zzzz__IWithFallbackTextureData_def.hpp"
#include "Vuplex/WebView/zzzz__IWithFileSelection_def.hpp"
#include "Vuplex/WebView/zzzz__IWithFind_def.hpp"
#include "Vuplex/WebView/zzzz__IWithHttpAuth_def.hpp"
#include "Vuplex/WebView/zzzz__IWithMovablePointer_def.hpp"
#include "Vuplex/WebView/zzzz__IWithNative2DMode_def.hpp"
#include "Vuplex/WebView/zzzz__IWithNativeJavaScriptDialogs_def.hpp"
#include "Vuplex/WebView/zzzz__IWithNativeOnScreenKeyboard_def.hpp"
#include "Vuplex/WebView/zzzz__IWithPdfCreation_def.hpp"
#include "Vuplex/WebView/zzzz__IWithPointerDownAndUp_def.hpp"
#include "Vuplex/WebView/zzzz__IWithPopups_def.hpp"
#include "Vuplex/WebView/zzzz__IWithSettableUserAgent_def.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidWebView)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
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
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class Material;
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
namespace UnityEngine {
class WaitForEndOfFrame;
}
namespace Vuplex::WebView {
struct AndroidWebView__GetCookie_d__159;
}
namespace Vuplex::WebView {
struct AndroidWebView__GetCookie_d__160;
}
namespace Vuplex::WebView {
struct AndroidWebView__InitInNative2DMode_d__56;
}
namespace Vuplex::WebView {
struct AndroidWebView__Init_d__55;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass136_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass140_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass141_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass163_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass41_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass44_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass44_1;
}
namespace Vuplex::WebView {
struct AndroidWebView___initAndroid2D_d__144;
}
namespace Vuplex::WebView {
struct AndroidWebView___initAndroid3D_d__145;
}
namespace Vuplex::WebView {
class AndroidWebView___renderPluginOncePerFrame_d__149;
}
namespace Vuplex::WebView {
class AuthRequestedEventArgs;
}
namespace Vuplex::WebView {
class Cookie;
}
namespace Vuplex::WebView {
class DownloadChangedEventArgs;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
namespace Vuplex::WebView {
class FileSelectionEventArgs;
}
namespace Vuplex::WebView {
struct FindResult;
}
namespace Vuplex::WebView {
struct ForceDark;
}
namespace Vuplex::WebView {
struct MixedContentMode;
}
namespace Vuplex::WebView {
struct MouseButton;
}
namespace Vuplex::WebView {
class PointerOptions;
}
namespace Vuplex::WebView {
struct PopupMode;
}
namespace Vuplex::WebView {
class PopupRequestedEventArgs;
}
namespace Vuplex::WebView {
template<typename T>
class ScriptDialogEventArgs_1;
}
namespace Vuplex::WebView {
class ScriptDialogEventArgs;
}
namespace Vuplex::WebView {
class TerminatedEventArgs;
}
namespace Vuplex::WebView {
struct WebPluginType;
}
namespace Vuplex::WebView {
struct __c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d;
}
// Forward declare root types
namespace Vuplex::WebView {
class AndroidWebView;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass136_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass140_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass141_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass163_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass41_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass44_0;
}
namespace Vuplex::WebView {
class AndroidWebView___c__DisplayClass44_1;
}
namespace Vuplex::WebView {
class AndroidWebView___renderPluginOncePerFrame_d__149;
}
namespace Vuplex::WebView {
struct AndroidWebView__GetCookie_d__159;
}
namespace Vuplex::WebView {
struct AndroidWebView__GetCookie_d__160;
}
namespace Vuplex::WebView {
struct AndroidWebView__InitInNative2DMode_d__56;
}
namespace Vuplex::WebView {
struct AndroidWebView__Init_d__55;
}
namespace Vuplex::WebView {
struct AndroidWebView___initAndroid2D_d__144;
}
namespace Vuplex::WebView {
struct AndroidWebView___initAndroid3D_d__145;
}
namespace Vuplex::WebView {
struct __c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___c__DisplayClass136_0);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___c__DisplayClass141_0);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___c__DisplayClass163_0);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___c__DisplayClass41_0);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1);
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149);
MARK_VAL_T(::Vuplex::WebView::AndroidWebView__GetCookie_d__159);
MARK_VAL_T(::Vuplex::WebView::AndroidWebView__GetCookie_d__160);
MARK_VAL_T(::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56);
MARK_VAL_T(::Vuplex::WebView::AndroidWebView__Init_d__55);
MARK_VAL_T(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144);
MARK_VAL_T(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145);
MARK_VAL_T(::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d);
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass136_0
class CORDL_TYPE AndroidWebView___c__DisplayClass136_0 : public ::System::Object {
public:
// Declarations
/// @brief Field httpAuthHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_httpAuthHandler, put=__cordl_internal_set_httpAuthHandler)) ::UnityEngine::AndroidJavaObject*  httpAuthHandler;

static inline ::Vuplex::WebView::AndroidWebView___c__DisplayClass136_0* New_ctor() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_httpAuthHandler() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_httpAuthHandler() ;

constexpr void __cordl_internal_set_httpAuthHandler(::UnityEngine::AndroidJavaObject*  value) ;

/// @brief Method <_handleAuthRequested>b__0, addr 0x16d22c4, size 0xf0, virtual false, abstract: false, final false
inline void __handleAuthRequested_b__0(::StringW  username, ::StringW  password) ;

/// @brief Method <_handleAuthRequested>b__1, addr 0x16d23b4, size 0xbc, virtual false, abstract: false, final false
inline void __handleAuthRequested_b__1() ;

/// @brief Method .ctor, addr 0x16d22bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___c__DisplayClass136_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass136_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___c__DisplayClass136_0(AndroidWebView___c__DisplayClass136_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass136_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___c__DisplayClass136_0(AndroidWebView___c__DisplayClass136_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{100};

/// @brief Field httpAuthHandler, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___httpAuthHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass136_0, ___httpAuthHandler) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___c__DisplayClass136_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass140_0/<<_handlePopup>b__0>d
struct CORDL_TYPE __c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d2504, size 0x334, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d28a8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0*", modifiers: "", def_value: None }, CppParam { name: "_popupWebView_5__2", ty: "::UnityW<::Vuplex::WebView::AndroidWebView>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0*  __4__this, ::UnityW<::Vuplex::WebView::AndroidWebView>  _popupWebView_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0*  __4__this;

/// @brief Field <popupWebView>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::AndroidWebView>  _popupWebView_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d, _popupWebView_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d, 0x40>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass140_0
class CORDL_TYPE AndroidWebView___c__DisplayClass140_0 : public ::System::Object {
public:
// Declarations
using ___handlePopup_b__0_d = ::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this;

/// @brief Field popupResultMessage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_popupResultMessage, put=__cordl_internal_set_popupResultMessage)) ::UnityEngine::AndroidJavaObject*  popupResultMessage;

/// @brief Field url, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_url, put=__cordl_internal_set_url)) ::StringW  url;

static inline ::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0* New_ctor() ;

constexpr ::UnityW<::Vuplex::WebView::AndroidWebView> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Vuplex::WebView::AndroidWebView>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_popupResultMessage() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_popupResultMessage() ;

constexpr ::StringW const& __cordl_internal_get_url() const;

constexpr ::StringW& __cordl_internal_get_url() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Vuplex::WebView::AndroidWebView>  value) ;

constexpr void __cordl_internal_set_popupResultMessage(::UnityEngine::AndroidJavaObject*  value) ;

constexpr void __cordl_internal_set_url(::StringW  value) ;

/// @brief Method <_handlePopup>b__0, addr 0x16d2478, size 0x8c, virtual false, abstract: false, final false
inline void __handlePopup_b__0() ;

/// @brief Method .ctor, addr 0x16d2470, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___c__DisplayClass140_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass140_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___c__DisplayClass140_0(AndroidWebView___c__DisplayClass140_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass140_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___c__DisplayClass140_0(AndroidWebView___c__DisplayClass140_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{102};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::AndroidWebView>  _____4__this;

/// @brief Field popupResultMessage, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___popupResultMessage;

/// @brief Field url, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0, ___popupResultMessage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0, ___url) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass141_0
class CORDL_TYPE AndroidWebView___c__DisplayClass141_0 : public ::System::Object {
public:
// Declarations
/// @brief Field continueCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_continueCallback, put=__cordl_internal_set_continueCallback)) ::System::Action_1<bool>*  continueCallback;

static inline ::Vuplex::WebView::AndroidWebView___c__DisplayClass141_0* New_ctor() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_continueCallback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_continueCallback() ;

constexpr void __cordl_internal_set_continueCallback(::System::Action_1<bool>*  value) ;

/// @brief Method <_handleScriptAlert>b__0, addr 0x16d28bc, size 0x28, virtual false, abstract: false, final false
inline void __handleScriptAlert_b__0() ;

/// @brief Method .ctor, addr 0x16d28b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___c__DisplayClass141_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass141_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___c__DisplayClass141_0(AndroidWebView___c__DisplayClass141_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass141_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___c__DisplayClass141_0(AndroidWebView___c__DisplayClass141_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{103};

/// @brief Field continueCallback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___continueCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass141_0, ___continueCallback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___c__DisplayClass141_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass163_0
class CORDL_TYPE AndroidWebView___c__DisplayClass163_0 : public ::System::Object {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::EventHandler*  value;

static inline ::Vuplex::WebView::AndroidWebView___c__DisplayClass163_0* New_ctor() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_value() const;

constexpr ::System::EventHandler*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::System::EventHandler*  value) ;

/// @brief Method <add_RenderProcessGone>b__0, addr 0x16d28ec, size 0x24, virtual false, abstract: false, final false
inline void _add_RenderProcessGone_b__0(::System::Object*  sender, ::Vuplex::WebView::TerminatedEventArgs*  eventArgs) ;

/// @brief Method .ctor, addr 0x16d28e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___c__DisplayClass163_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass163_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___c__DisplayClass163_0(AndroidWebView___c__DisplayClass163_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass163_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___c__DisplayClass163_0(AndroidWebView___c__DisplayClass163_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{104};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::System::EventHandler*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass163_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___c__DisplayClass163_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass41_0
class CORDL_TYPE AndroidWebView___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field taskSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskSource, put=__cordl_internal_set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  taskSource;

static inline ::Vuplex::WebView::AndroidWebView___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <CreatePdf>b__0, addr 0x16d2918, size 0xd8, virtual false, abstract: false, final false
inline void _CreatePdf_b__0(::StringW  filePath) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& __cordl_internal_get_taskSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& __cordl_internal_get_taskSource() ;

constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x16d2910, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___c__DisplayClass41_0(AndroidWebView___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___c__DisplayClass41_0(AndroidWebView___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{105};

/// @brief Field taskSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  ___taskSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass41_0, ___taskSource) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___c__DisplayClass41_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass44_0
class CORDL_TYPE AndroidWebView___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::StringW>*  callback;

static inline ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <ExecuteJavaScript>b__0, addr 0x16d29f8, size 0xdc, virtual false, abstract: false, final false
inline void _ExecuteJavaScript_b__0(::StringW  result) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x16d29f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass44_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___c__DisplayClass44_0(AndroidWebView___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass44_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___c__DisplayClass44_0(AndroidWebView___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{106};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<>c__DisplayClass44_1
class CORDL_TYPE AndroidWebView___c__DisplayClass44_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0*  CS$__8__locals1;

/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::StringW  result;

static inline ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1* New_ctor() ;

/// @brief Method <ExecuteJavaScript>b__1, addr 0x16d2adc, size 0x30, virtual false, abstract: false, final false
inline void _ExecuteJavaScript_b__1() ;

constexpr ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_result() const;

constexpr ::StringW& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0*  value) ;

constexpr void __cordl_internal_set_result(::StringW  value) ;

/// @brief Method .ctor, addr 0x16d2ad4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___c__DisplayClass44_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass44_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___c__DisplayClass44_1(AndroidWebView___c__DisplayClass44_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___c__DisplayClass44_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___c__DisplayClass44_1(AndroidWebView___c__DisplayClass44_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{107};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___result;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1, ___result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.AndroidWebView/<GetCookie>d__159
struct CORDL_TYPE AndroidWebView__GetCookie_d__159 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d2b0c, size 0x280, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d2d8c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView__GetCookie_d__159() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::Cookie*>", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cookieName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>", modifiers: "", def_value: None }]
constexpr AndroidWebView__GetCookie_d__159(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::Cookie*>  __t__builder, ::StringW  url, ::StringW  cookieName, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Vuplex::WebView::Cookie*>  __t__builder;

/// @brief Field url, offset: 0x20, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field cookieName, offset: 0x28, size: 0x8, def value: None
 ::StringW  cookieName;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__159, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__159, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__159, url) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__159, cookieName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__159, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView__GetCookie_d__159, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.AndroidWebView/<GetCookie>d__160
struct CORDL_TYPE AndroidWebView__GetCookie_d__160 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d2e08, size 0x208, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d3010, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView__GetCookie_d__160() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cookieName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::Action_1<::Vuplex::WebView::Cookie*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::Cookie*>", modifiers: "", def_value: None }]
constexpr AndroidWebView__GetCookie_d__160(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  url, ::StringW  cookieName, ::System::Action_1<::Vuplex::WebView::Cookie*>*  callback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::Cookie*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field url, offset: 0x28, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field cookieName, offset: 0x30, size: 0x8, def value: None
 ::StringW  cookieName;

/// @brief Field callback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Vuplex::WebView::Cookie*>*  callback;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Vuplex::WebView::Cookie*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__160, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__160, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__160, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__160, cookieName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__160, callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__GetCookie_d__160, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView__GetCookie_d__160, 0x48>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.AndroidWebView/<Init>d__55
struct CORDL_TYPE AndroidWebView__Init_d__55 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d301c, size 0x208, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d3224, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView__Init_d__55() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::AndroidWebView>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr AndroidWebView__Init_d__55(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this, int32_t  width, int32_t  height, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this;

/// @brief Field width, offset: 0x28, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x2c, size: 0x4, def value: None
 int32_t  height;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView__Init_d__55, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__Init_d__55, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__Init_d__55, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__Init_d__55, width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__Init_d__55, height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__Init_d__55, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView__Init_d__55, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, UnityEngine.Rect
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.AndroidWebView/<InitInNative2DMode>d__56
struct CORDL_TYPE AndroidWebView__InitInNative2DMode_d__56 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d328c, size 0x20c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d3498, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView__InitInNative2DMode_d__56() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::AndroidWebView>", modifiers: "", def_value: None }, CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr AndroidWebView__InitInNative2DMode_d__56(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this, ::UnityEngine::Rect  rect, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this;

/// @brief Field rect, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56, rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56, 0x40>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, UnityEngine.Rect
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.AndroidWebView/<_initAndroid2D>d__144
struct CORDL_TYPE AndroidWebView___initAndroid2D_d__144 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d3500, size 0x850, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d3f8c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___initAndroid2D_d__144() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::AndroidWebView>", modifiers: "", def_value: None }, CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "popupResultMessage", ty: "::UnityEngine::AndroidJavaObject*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr AndroidWebView___initAndroid2D_d__144(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this, ::UnityEngine::Rect  rect, ::UnityEngine::AndroidJavaObject*  popupResultMessage, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this;

/// @brief Field rect, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field popupResultMessage, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  popupResultMessage;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, popupResultMessage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, 0x50>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.AndroidWebView/<_initAndroid3D>d__145
struct CORDL_TYPE AndroidWebView___initAndroid3D_d__145 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16d3ff4, size 0x904, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16d4944, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView___initAndroid3D_d__145() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::AndroidWebView>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "popupResultMessage", ty: "::UnityEngine::AndroidJavaObject*", modifiers: "", def_value: None }, CppParam { name: "_vulkanEnabled_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr AndroidWebView___initAndroid3D_d__145(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this, int32_t  width, int32_t  height, ::UnityEngine::AndroidJavaObject*  popupResultMessage, bool  _vulkanEnabled_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this;

/// @brief Field width, offset: 0x28, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x2c, size: 0x4, def value: None
 int32_t  height;

/// @brief Field popupResultMessage, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  popupResultMessage;

/// @brief Field <vulkanEnabled>5__2, offset: 0x38, size: 0x1, def value: None
 bool  _vulkanEnabled_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, popupResultMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, _vulkanEnabled_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, 0x50>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView/<_renderPluginOncePerFrame>d__149
class CORDL_TYPE AndroidWebView___renderPluginOncePerFrame_d__149 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Vuplex::WebView::AndroidWebView>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16d49d8, size 0xfc, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16d4ad4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16d4adc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16d4b14, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16d49d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Vuplex::WebView::AndroidWebView> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Vuplex::WebView::AndroidWebView>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Vuplex::WebView::AndroidWebView>  value) ;

/// @brief Method .ctor, addr 0x16d49ac, size 0x28, virtual false, abstract: false, final false
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
constexpr AndroidWebView___renderPluginOncePerFrame_d__149() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___renderPluginOncePerFrame_d__149", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView___renderPluginOncePerFrame_d__149(AndroidWebView___renderPluginOncePerFrame_d__149 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView___renderPluginOncePerFrame_d__149", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView___renderPluginOncePerFrame_d__149(AndroidWebView___renderPluginOncePerFrame_d__149 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{114};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::AndroidWebView>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Nullable`1<T>, Vuplex.WebView.IWebView, Vuplex.WebView.IWithChangingTexture, Vuplex.WebView.IWithDeepLinking, Vuplex.WebView.IWithDownloads, Vuplex.WebView.IWithFallbackTextureData, Vuplex.WebView.IWithFileSelection, Vuplex.WebView.IWithFind, Vuplex.WebView.IWithHttpAuth, Vuplex.WebView.IWithMovablePointer, Vuplex.WebView.IWithNative2DMode, Vuplex.WebView.IWithNativeJavaScriptDialogs, Vuplex.WebView.IWithNativeOnScreenKeyboard, Vuplex.WebView.IWithPdfCreation, Vuplex.WebView.IWithPointerDownAndUp, Vuplex.WebView.IWithPopups, Vuplex.WebView.IWithSettableUserAgent, Vuplex.WebView.Internal.BaseWebView, Vuplex.WebView.WebPluginType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebView
class CORDL_TYPE AndroidWebView : public ::Vuplex::WebView::Internal::BaseWebView {
public:
// Declarations
using _GetCookie_d__159 = ::Vuplex::WebView::AndroidWebView__GetCookie_d__159;

using _GetCookie_d__160 = ::Vuplex::WebView::AndroidWebView__GetCookie_d__160;

using _InitInNative2DMode_d__56 = ::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56;

using _Init_d__55 = ::Vuplex::WebView::AndroidWebView__Init_d__55;

using __c__DisplayClass136_0 = ::Vuplex::WebView::AndroidWebView___c__DisplayClass136_0;

using __c__DisplayClass140_0 = ::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0;

using __c__DisplayClass141_0 = ::Vuplex::WebView::AndroidWebView___c__DisplayClass141_0;

using __c__DisplayClass163_0 = ::Vuplex::WebView::AndroidWebView___c__DisplayClass163_0;

using __c__DisplayClass41_0 = ::Vuplex::WebView::AndroidWebView___c__DisplayClass41_0;

using __c__DisplayClass44_0 = ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0;

using __c__DisplayClass44_1 = ::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1;

using __initAndroid2D_d__144 = ::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144;

using __initAndroid3D_d__145 = ::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145;

using __renderPluginOncePerFrame_d__149 = ::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149;

/// @brief Field DownloadProgressChanged, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_DownloadProgressChanged, put=__cordl_internal_set_DownloadProgressChanged)) ::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  DownloadProgressChanged;

 __declspec(property(get=get_Native2DModeEnabled)) bool  Native2DModeEnabled;

 __declspec(property(get=get_PluginType)) ::Vuplex::WebView::WebPluginType  PluginType;

/// @brief Field PopupRequested, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_PopupRequested, put=__cordl_internal_set_PopupRequested)) ::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*  PopupRequested;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field ScriptAlert, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScriptAlert, put=__cordl_internal_set_ScriptAlert)) ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  ScriptAlert;

/// @brief Field TextureChanged, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_TextureChanged, put=__cordl_internal_set_TextureChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*  TextureChanged;

 __declspec(property(get=get_Visible, put=set_Visible)) bool  Visible;

/// @brief Field <PluginType>k__BackingField, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__PluginType_k__BackingField, put=__cordl_internal_set__PluginType_k__BackingField)) ::Vuplex::WebView::WebPluginType  _PluginType_k__BackingField;

/// @brief Field <Visible>k__BackingField, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get__Visible_k__BackingField, put=__cordl_internal_set__Visible_k__BackingField)) bool  _Visible_k__BackingField;

/// @brief Field _authRequestedHandler, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__authRequestedHandler, put=__cordl_internal_set__authRequestedHandler)) ::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*  _authRequestedHandler;

/// @brief Field _class, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__class, put=setStaticF__class)) ::UnityEngine::AndroidJavaClass*  _class;

/// @brief Field _fileSelectionHandler, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__fileSelectionHandler, put=__cordl_internal_set__fileSelectionHandler)) ::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  _fileSelectionHandler;

/// @brief Field _pendingFindCallbacks, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingFindCallbacks, put=__cordl_internal_set__pendingFindCallbacks)) ::System::Collections::Generic::List_1<::System::Action_1<::Vuplex::WebView::FindResult>*>*  _pendingFindCallbacks;

/// @brief Field _scriptAlertHandler, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__scriptAlertHandler, put=__cordl_internal_set__scriptAlertHandler)) ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  _scriptAlertHandler;

/// @brief Field _scriptConfirmHandler, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__scriptConfirmHandler, put=__cordl_internal_set__scriptConfirmHandler)) ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs_1<bool>*>*  _scriptConfirmHandler;

/// @brief Field _splitApplicationBinaryEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__splitApplicationBinaryEnabled, put=setStaticF__splitApplicationBinaryEnabled)) bool  _splitApplicationBinaryEnabled;

/// @brief Field _waitForEndOfFrame, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitForEndOfFrame, put=__cordl_internal_set__waitForEndOfFrame)) ::UnityEngine::WaitForEndOfFrame*  _waitForEndOfFrame;

/// @brief Field _webView, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__webView, put=__cordl_internal_set__webView)) ::UnityEngine::AndroidJavaObject*  _webView;

/// @brief Field _webViewPackageIsAvailable, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__webViewPackageIsAvailable, put=setStaticF__webViewPackageIsAvailable)) ::System::Nullable_1<bool>  _webViewPackageIsAvailable;

/// @brief Convert operator to "::Vuplex::WebView::IWebView"
constexpr operator  ::Vuplex::WebView::IWebView*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithChangingTexture"
constexpr operator  ::Vuplex::WebView::IWithChangingTexture*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithDeepLinking"
constexpr operator  ::Vuplex::WebView::IWithDeepLinking*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithDownloads"
constexpr operator  ::Vuplex::WebView::IWithDownloads*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithFallbackTextureData"
constexpr operator  ::Vuplex::WebView::IWithFallbackTextureData*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithFileSelection"
constexpr operator  ::Vuplex::WebView::IWithFileSelection*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithFind"
constexpr operator  ::Vuplex::WebView::IWithFind*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithHttpAuth"
constexpr operator  ::Vuplex::WebView::IWithHttpAuth*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithMovablePointer"
constexpr operator  ::Vuplex::WebView::IWithMovablePointer*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithNative2DMode"
constexpr operator  ::Vuplex::WebView::IWithNative2DMode*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithNativeJavaScriptDialogs"
constexpr operator  ::Vuplex::WebView::IWithNativeJavaScriptDialogs*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithNativeOnScreenKeyboard"
constexpr operator  ::Vuplex::WebView::IWithNativeOnScreenKeyboard*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithPdfCreation"
constexpr operator  ::Vuplex::WebView::IWithPdfCreation*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithPointerDownAndUp"
constexpr operator  ::Vuplex::WebView::IWithPointerDownAndUp*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithPopups"
constexpr operator  ::Vuplex::WebView::IWithPopups*() noexcept;

/// @brief Convert operator to "::Vuplex::WebView::IWithSettableUserAgent"
constexpr operator  ::Vuplex::WebView::IWithSettableUserAgent*() noexcept;

/// @brief Method AssertWebViewIsAvailable, addr 0x16cc2ec, size 0x9c, virtual false, abstract: false, final false
static inline void AssertWebViewIsAvailable() ;

/// @brief Method BringToFront, addr 0x16cc510, size 0xb8, virtual true, abstract: false, final true
inline void BringToFront() ;

/// @brief Method CanGoBack, addr 0x16cc5c8, size 0x18c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* CanGoBack() ;

/// @brief Method CanGoForward, addr 0x16cc754, size 0x18c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* CanGoForward() ;

/// @brief Method CaptureScreenshot, addr 0x16cc8e0, size 0x1a8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* CaptureScreenshot() ;

/// @brief Method ClearAllData, addr 0x16ca800, size 0xd0, virtual false, abstract: false, final false
static inline void ClearAllData() ;

/// @brief Method ClearFindMatches, addr 0x16ccb34, size 0xac, virtual true, abstract: false, final true
inline void ClearFindMatches() ;

/// @brief Method ClearHistory, addr 0x16ccbe0, size 0xac, virtual false, abstract: false, final false
inline void ClearHistory() ;

/// @brief Method Click, addr 0x16ccc8c, size 0x1a0, virtual true, abstract: false, final false
inline void Click(int32_t  xInPixels, int32_t  yInPixels, bool  preventStealingFocus) ;

/// @brief Method CreatePdf, addr 0x16cce2c, size 0x1c4, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* CreatePdf() ;

/// @brief Method DeleteCookies, addr 0x16c9f94, size 0x184, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* DeleteCookies(::StringW  url, ::StringW  cookieName) ;

/// @brief Method Dispose, addr 0x16ccff0, size 0x1ac, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method ExecuteJavaScript, addr 0x16cd218, size 0x190, virtual true, abstract: false, final false
inline void ExecuteJavaScript(::StringW  javaScript, ::System::Action_1<::StringW>*  callback) ;

/// @brief Method Find, addr 0x16cd3a8, size 0x234, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Vuplex::WebView::FindResult>* Find(::StringW  text, bool  forward) ;

/// @brief Method FlushCookies, addr 0x16cb3f8, size 0xd0, virtual false, abstract: false, final false
static inline void FlushCookies() ;

/// @brief Method GetCookie, addr 0x16d1c1c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Vuplex::WebView::Cookie*>* GetCookie(::StringW  url, ::StringW  cookieName) ;

/// @brief Method GetCookie, addr 0x16d1d08, size 0xa4, virtual false, abstract: false, final false
static inline void GetCookie(::StringW  url, ::StringW  cookieName, ::System::Action_1<::Vuplex::WebView::Cookie*>*  callback) ;

/// @brief Method GetCookies, addr 0x16ca17c, size 0x198, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* GetCookies(::StringW  url, ::StringW  cookieName) ;

/// @brief Method GetFallbackTextureData, addr 0x16cd5dc, size 0x18c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GetFallbackTextureData() ;

/// @brief Method GetNativeWebView, addr 0x16cd768, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::AndroidJavaObject* GetNativeWebView() ;

/// @brief Method GetRawTextureData, addr 0x16cd82c, size 0x14, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GetRawTextureData() ;

/// @brief Method GloballySetUserAgent, addr 0x16cb138, size 0x104, virtual false, abstract: false, final false
static inline void GloballySetUserAgent(bool  mobile) ;

/// @brief Method GloballySetUserAgent, addr 0x16cb290, size 0xcc, virtual false, abstract: false, final false
static inline void GloballySetUserAgent(::StringW  userAgent) ;

/// @brief Method GloballyUseAlternativeInputEventSystem, addr 0x16d1dac, size 0x4, virtual false, abstract: false, final false
static inline void GloballyUseAlternativeInputEventSystem(bool  useAlternativeInputEventSystem) ;

/// @brief Method GoBack, addr 0x16cd840, size 0xac, virtual true, abstract: false, final false
inline void GoBack() ;

/// @brief Method GoForward, addr 0x16cd8ec, size 0xac, virtual true, abstract: false, final false
inline void GoForward() ;

/// @brief Method HandleDownloadProgressChanged, addr 0x16d0e40, size 0x60, virtual false, abstract: false, final false
inline void HandleDownloadProgressChanged(::StringW  serializedMessage) ;

/// @brief Method HandleFindResult, addr 0x16d0f58, size 0x270, virtual false, abstract: false, final false
inline void HandleFindResult(::StringW  serializedResult) ;

/// @brief Method HandleTextureChanged, addr 0x16d14cc, size 0x8, virtual true, abstract: false, final false
inline void HandleTextureChanged(::StringW  textureString) ;

/// @brief Method Init, addr 0x16cd998, size 0xd8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Init(int32_t  width, int32_t  height) ;

/// @brief Method InitInNative2DMode, addr 0x16cda70, size 0xe8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* InitInNative2DMode(::UnityEngine::Rect  rect) ;

/// @brief Method Instantiate, addr 0x16ca98c, size 0x74, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::AndroidWebView> Instantiate() ;

/// @brief Method IsUsingNativeVideoRendering, addr 0x16d1c14, size 0x8, virtual false, abstract: false, final false
static inline bool IsUsingNativeVideoRendering() ;

/// @brief Method IsWebViewAvailable, addr 0x16cc388, size 0x188, virtual false, abstract: false, final false
static inline bool IsWebViewAvailable() ;

/// @brief Method LoadHtml, addr 0x16cdb58, size 0xb8, virtual true, abstract: false, final false
inline void LoadHtml(::StringW  html) ;

/// @brief Method LoadHtml, addr 0x16cdc10, size 0xe4, virtual false, abstract: false, final false
inline void LoadHtml(::StringW  html, ::StringW  baseUrl) ;

/// @brief Method LoadUrl, addr 0x16cdcf4, size 0x174, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url) ;

/// @brief Method LoadUrl, addr 0x16cde68, size 0x158, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  additionalHttpHeaders) ;

/// @brief Method MovePointer, addr 0x16cdfc0, size 0x1b4, virtual true, abstract: false, final true
inline void MovePointer(::UnityEngine::Vector2  normalizedPoint, bool  pointerLeave) ;

static inline ::Vuplex::WebView::AndroidWebView* New_ctor() ;

/// @brief Method OnEnable, addr 0x16d16b8, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Pause, addr 0x16ce174, size 0xac, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method PauseAll, addr 0x16cb4c8, size 0xd0, virtual false, abstract: false, final false
static inline void PauseAll() ;

/// @brief Method PointerDown, addr 0x16ce220, size 0x10, virtual true, abstract: false, final true
inline void PointerDown(::UnityEngine::Vector2  point) ;

/// @brief Method PointerDown, addr 0x16ce46c, size 0x88, virtual true, abstract: false, final true
inline void PointerDown(::UnityEngine::Vector2  point, ::Vuplex::WebView::PointerOptions*  options) ;

/// @brief Method PointerUp, addr 0x16ce4f4, size 0xc, virtual true, abstract: false, final true
inline void PointerUp(::UnityEngine::Vector2  point) ;

/// @brief Method PointerUp, addr 0x16ce6dc, size 0x84, virtual true, abstract: false, final true
inline void PointerUp(::UnityEngine::Vector2  point, ::Vuplex::WebView::PointerOptions*  options) ;

/// @brief Method PostUrl, addr 0x16ce760, size 0xe4, virtual false, abstract: false, final false
inline void PostUrl(::StringW  url, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Reload, addr 0x16ce844, size 0xac, virtual true, abstract: false, final false
inline void Reload() ;

/// @brief Method Resume, addr 0x16ce8f0, size 0xac, virtual false, abstract: false, final false
inline void Resume() ;

/// @brief Method ResumeAll, addr 0x16cb598, size 0xd0, virtual false, abstract: false, final false
static inline void ResumeAll() ;

/// @brief Method RunOnAndroidUIThread, addr 0x16ce99c, size 0x58, virtual false, abstract: false, final false
static inline void RunOnAndroidUIThread(::System::Action*  function) ;

/// @brief Method Scroll, addr 0x16ceb20, size 0x200, virtual true, abstract: false, final false
inline void Scroll(::UnityEngine::Vector2  normalizedScrollDelta, ::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method Scroll, addr 0x16ce9f4, size 0x12c, virtual true, abstract: false, final false
inline void Scroll(int32_t  x, int32_t  y) ;

/// @brief Method SendKey, addr 0x16ced20, size 0xb8, virtual true, abstract: false, final false
inline void SendKey(::StringW  key) ;

/// @brief Method SetAlternativeKeyboardInputSystemEnabled, addr 0x16cedd8, size 0x104, virtual false, abstract: false, final false
static inline void SetAlternativeKeyboardInputSystemEnabled(bool  enabled) ;

/// @brief Method SetAlternativePointerInputSystemEnabled, addr 0x16ca6a8, size 0x104, virtual false, abstract: false, final false
static inline void SetAlternativePointerInputSystemEnabled(bool  enabled) ;

/// @brief Method SetAudioAndVideoCaptureEnabled, addr 0x16d1fd8, size 0x54, virtual false, abstract: false, final false
static inline void SetAudioAndVideoCaptureEnabled(bool  enabled) ;

/// @brief Method SetAutoplayEnabled, addr 0x16cabd8, size 0x104, virtual false, abstract: false, final false
static inline void SetAutoplayEnabled(bool  enabled) ;

/// @brief Method SetCameraAndMicrophoneEnabled, addr 0x16cad30, size 0x104, virtual false, abstract: false, final false
static inline void SetCameraAndMicrophoneEnabled(bool  enabled) ;

/// @brief Method SetCameraEnabled, addr 0x16ceedc, size 0x104, virtual false, abstract: false, final false
static inline void SetCameraEnabled(bool  enabled) ;

/// @brief Method SetCookie, addr 0x16ca368, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* SetCookie(::Vuplex::WebView::Cookie*  cookie) ;

/// @brief Method SetCustomUriSchemesEnabled, addr 0x16d202c, size 0x4, virtual false, abstract: false, final false
static inline void SetCustomUriSchemesEnabled(bool  enabled) ;

/// @brief Method SetDeepLinkingEnabled, addr 0x16cefe0, size 0xf0, virtual true, abstract: false, final true
inline void SetDeepLinkingEnabled(bool  enabled) ;

/// @brief Method SetDefaultBackgroundEnabled, addr 0x16cf0d0, size 0xf0, virtual true, abstract: false, final false
inline void SetDefaultBackgroundEnabled(bool  enabled) ;

/// @brief Method SetDownloadsEnabled, addr 0x16cf1c0, size 0xf0, virtual true, abstract: false, final true
inline void SetDownloadsEnabled(bool  enabled) ;

/// @brief Method SetDrmEnabled, addr 0x16cf2b0, size 0x104, virtual false, abstract: false, final false
static inline void SetDrmEnabled(bool  enabled) ;

/// @brief Method SetFocused, addr 0x16cf3b4, size 0xf0, virtual true, abstract: false, final false
inline void SetFocused(bool  focused) ;

/// @brief Method SetForceDark, addr 0x16cf4a4, size 0xec, virtual false, abstract: false, final false
inline void SetForceDark(::Vuplex::WebView::ForceDark  forceDark) ;

/// @brief Method SetForceDrawEnabled, addr 0x16d2030, size 0x4, virtual false, abstract: false, final false
static inline void SetForceDrawEnabled(bool  enabled) ;

/// @brief Method SetFullscreenEnabled, addr 0x16cf590, size 0xf0, virtual false, abstract: false, final false
inline void SetFullscreenEnabled(bool  enabled) ;

/// @brief Method SetGeolocationEnabled, addr 0x16cf680, size 0x104, virtual false, abstract: false, final false
static inline void SetGeolocationEnabled(bool  enabled) ;

/// @brief Method SetGeolocationPermissionEnabled, addr 0x16d2034, size 0x54, virtual false, abstract: false, final false
static inline void SetGeolocationPermissionEnabled(bool  enabled) ;

/// @brief Method SetIgnoreCertificateErrors, addr 0x16cae88, size 0x104, virtual false, abstract: false, final false
static inline void SetIgnoreCertificateErrors(bool  ignore) ;

/// @brief Method SetIgnoreSslErrors, addr 0x16d2088, size 0x4, virtual false, abstract: false, final false
static inline void SetIgnoreSslErrors(bool  ignore) ;

/// @brief Method SetInitialScale, addr 0x16cf784, size 0xf4, virtual false, abstract: false, final false
inline void SetInitialScale(float_t  scale) ;

/// @brief Method SetMediaPlaybackRequiresUserGesture, addr 0x16d208c, size 0x4, virtual false, abstract: false, final false
inline void SetMediaPlaybackRequiresUserGesture(bool  mediaPlaybackRequiresUserGesture) ;

/// @brief Method SetMicrophoneEnabled, addr 0x16cf878, size 0x104, virtual false, abstract: false, final false
static inline void SetMicrophoneEnabled(bool  enabled) ;

/// @brief Method SetMixedContentMode, addr 0x16cfc28, size 0xec, virtual false, abstract: false, final false
inline void SetMixedContentMode(::Vuplex::WebView::MixedContentMode  mode) ;

/// @brief Method SetNativeFileSelectionEnabled, addr 0x16cf97c, size 0xf0, virtual false, abstract: false, final false
inline void SetNativeFileSelectionEnabled(bool  enabled) ;

/// @brief Method SetNativeJavaScriptDialogsEnabled, addr 0x16cfa6c, size 0xf0, virtual true, abstract: false, final true
inline void SetNativeJavaScriptDialogsEnabled(bool  enabled) ;

/// @brief Method SetNativeKeyboardEnabled, addr 0x16d2090, size 0x4, virtual false, abstract: false, final false
static inline void SetNativeKeyboardEnabled(bool  enabled) ;

/// @brief Method SetNativeOnScreenKeyboardEnabled, addr 0x16cfd14, size 0xf0, virtual true, abstract: false, final true
inline void SetNativeOnScreenKeyboardEnabled(bool  enabled) ;

/// @brief Method SetNativeParentView, addr 0x16cfb5c, size 0xcc, virtual false, abstract: false, final false
static inline void SetNativeParentView(::UnityEngine::AndroidJavaObject*  nativeParentView) ;

/// @brief Method SetNativeVideoRenderingEnabled, addr 0x16d20e8, size 0x4, virtual false, abstract: false, final false
static inline void SetNativeVideoRenderingEnabled(bool  enabled) ;

/// @brief Method SetNativeViewGroup, addr 0x16d2094, size 0x54, virtual false, abstract: false, final false
static inline void SetNativeViewGroup(::UnityEngine::AndroidJavaObject*  viewGroup) ;

/// @brief Method SetNativeZoomEnabled, addr 0x16cfe04, size 0xfc, virtual true, abstract: false, final true
inline void SetNativeZoomEnabled(bool  enabled) ;

/// @brief Method SetPopupMode, addr 0x16cff00, size 0xec, virtual true, abstract: false, final true
inline void SetPopupMode(::Vuplex::WebView::PopupMode  popupMode) ;

/// @brief Method SetRect, addr 0x16cffec, size 0x244, virtual true, abstract: false, final true
inline void SetRect(::UnityEngine::Rect  rect) ;

/// @brief Method SetRemoteDebuggingEnabled, addr 0x16caa50, size 0x134, virtual false, abstract: false, final false
static inline void SetRemoteDebuggingEnabled(bool  enabled) ;

/// @brief Method SetRenderingEnabled, addr 0x16d0230, size 0x138, virtual true, abstract: false, final false
inline void SetRenderingEnabled(bool  enabled) ;

/// @brief Method SetScrollbarsEnabled, addr 0x16d0368, size 0xf0, virtual false, abstract: false, final false
inline void SetScrollbarsEnabled(bool  enabled) ;

/// @brief Method SetStorageEnabled, addr 0x16cafe0, size 0x104, virtual false, abstract: false, final false
static inline void SetStorageEnabled(bool  enabled) ;

/// @brief Method SetSurface, addr 0x16d0458, size 0xf0, virtual false, abstract: false, final false
inline void SetSurface(::System::IntPtr  surface) ;

/// @brief Method SetTextZoom, addr 0x16d0548, size 0xec, virtual false, abstract: false, final false
inline void SetTextZoom(int32_t  textZoom) ;

/// @brief Method SetUserAgent, addr 0x16d0634, size 0xf0, virtual true, abstract: false, final true
inline void SetUserAgent(bool  mobile) ;

/// @brief Method SetUserAgent, addr 0x16d0724, size 0xb8, virtual true, abstract: false, final true
inline void SetUserAgent(::StringW  userAgent) ;

/// @brief Method SetVisible, addr 0x16d07dc, size 0x100, virtual true, abstract: false, final true
inline void SetVisible(bool  visible) ;

/// @brief Method StopLoad, addr 0x16d08dc, size 0xac, virtual true, abstract: false, final false
inline void StopLoad() ;

/// @brief Method UseAlternativeInputEventSystem, addr 0x16d20ec, size 0x4, virtual false, abstract: false, final false
inline void UseAlternativeInputEventSystem(bool  useAlternativeInputEventSystem) ;

/// @brief Method WebView_depositPointer, addr 0x16d1b28, size 0x7c, virtual false, abstract: false, final false
static inline int32_t WebView_depositPointer(::System::IntPtr  pointer) ;

/// @brief Method WebView_destroyVulkanTexture, addr 0x16d1a44, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_destroyVulkanTexture(::System::IntPtr  texture) ;

/// @brief Method WebView_deviceHasRequiredVulkanExtension, addr 0x16d1ba4, size 0x70, virtual false, abstract: false, final false
static inline bool WebView_deviceHasRequiredVulkanExtension() ;

/// @brief Method WebView_getRenderFunction, addr 0x16d1ac0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr WebView_getRenderFunction() ;

/// @brief Method WebView_removePointer, addr 0x16cd19c, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_removePointer(::System::IntPtr  pointer) ;

/// @brief Method ZoomBy, addr 0x16d0988, size 0xf4, virtual false, abstract: false, final false
inline void ZoomBy(float_t  zoomFactor) ;

/// @brief Method ZoomIn, addr 0x16d0a7c, size 0xac, virtual true, abstract: false, final false
inline void ZoomIn() ;

/// @brief Method ZoomOut, addr 0x16d0b28, size 0xac, virtual true, abstract: false, final false
inline void ZoomOut() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>* const& __cordl_internal_get_DownloadProgressChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*& __cordl_internal_get_DownloadProgressChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>* const& __cordl_internal_get_PopupRequested() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*& __cordl_internal_get_PopupRequested() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>* const& __cordl_internal_get_ScriptAlert() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*& __cordl_internal_get_ScriptAlert() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>* const& __cordl_internal_get_TextureChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*& __cordl_internal_get_TextureChanged() ;

constexpr ::Vuplex::WebView::WebPluginType const& __cordl_internal_get__PluginType_k__BackingField() const;

constexpr ::Vuplex::WebView::WebPluginType& __cordl_internal_get__PluginType_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Visible_k__BackingField() const;

constexpr bool& __cordl_internal_get__Visible_k__BackingField() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>* const& __cordl_internal_get__authRequestedHandler() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*& __cordl_internal_get__authRequestedHandler() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>* const& __cordl_internal_get__fileSelectionHandler() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*& __cordl_internal_get__fileSelectionHandler() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::Vuplex::WebView::FindResult>*>* const& __cordl_internal_get__pendingFindCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::Vuplex::WebView::FindResult>*>*& __cordl_internal_get__pendingFindCallbacks() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>* const& __cordl_internal_get__scriptAlertHandler() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*& __cordl_internal_get__scriptAlertHandler() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs_1<bool>*>* const& __cordl_internal_get__scriptConfirmHandler() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs_1<bool>*>*& __cordl_internal_get__scriptConfirmHandler() ;

constexpr ::UnityEngine::WaitForEndOfFrame* const& __cordl_internal_get__waitForEndOfFrame() const;

constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get__waitForEndOfFrame() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get__webView() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get__webView() ;

constexpr void __cordl_internal_set_DownloadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_PopupRequested(::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_ScriptAlert(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  value) ;

constexpr void __cordl_internal_set_TextureChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*  value) ;

constexpr void __cordl_internal_set__PluginType_k__BackingField(::Vuplex::WebView::WebPluginType  value) ;

constexpr void __cordl_internal_set__Visible_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__authRequestedHandler(::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*  value) ;

constexpr void __cordl_internal_set__fileSelectionHandler(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  value) ;

constexpr void __cordl_internal_set__pendingFindCallbacks(::System::Collections::Generic::List_1<::System::Action_1<::Vuplex::WebView::FindResult>*>*  value) ;

constexpr void __cordl_internal_set__scriptAlertHandler(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  value) ;

constexpr void __cordl_internal_set__scriptConfirmHandler(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs_1<bool>*>*  value) ;

constexpr void __cordl_internal_set__waitForEndOfFrame(::UnityEngine::WaitForEndOfFrame*  value) ;

constexpr void __cordl_internal_set__webView(::UnityEngine::AndroidJavaObject*  value) ;

/// @brief Method _callInstanceMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TReturn>
inline TReturn _callInstanceMethod(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _callInstanceMethod, addr 0x16cbaec, size 0x90, virtual false, abstract: false, final false
inline void _callInstanceMethod(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _callStaticMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TReturn>
static inline TReturn _callStaticMethod(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _callStaticMethod, addr 0x16cca88, size 0xac, virtual false, abstract: false, final false
static inline void _callStaticMethod(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method _createMaterial, addr 0x16d0bd4, size 0x50, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> _createMaterial() ;

/// @brief Method _createTexture, addr 0x16d0c24, size 0x38, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* _createTexture(int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x16d20f0, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _destroyNativeTexture, addr 0x16d0c5c, size 0x94, virtual true, abstract: false, final false
inline void _destroyNativeTexture(::System::IntPtr  nativeTexture) ;

/// @brief Method _handleAuthRequested, addr 0x16d0cf0, size 0x150, virtual false, abstract: false, final false
inline void _handleAuthRequested(::StringW  host, ::UnityEngine::AndroidJavaObject*  httpAuthHandler) ;

/// @brief Method _handleFileSelection, addr 0x16d0ea0, size 0xb8, virtual false, abstract: false, final false
inline void _handleFileSelection(::StringW  serializedMessage, ::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*  continueCallback, ::System::Action*  cancelCallback) ;

/// @brief Method _handlePopup, addr 0x16d11c8, size 0x154, virtual false, abstract: false, final false
inline void _handlePopup(::StringW  url, ::UnityEngine::AndroidJavaObject*  popupResultMessage) ;

/// @brief Method _handleScriptAlert, addr 0x16d131c, size 0x108, virtual false, abstract: false, final false
inline void _handleScriptAlert(::StringW  message, ::System::Action_1<bool>*  continueCallback) ;

/// @brief Method _handleScriptConfirm, addr 0x16d1424, size 0xa8, virtual false, abstract: false, final false
inline void _handleScriptConfirm(::StringW  message, ::System::Action_1<bool>*  continueCallback) ;

/// @brief Method _initAndroid2D, addr 0x16d14d4, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _initAndroid2D(::UnityEngine::Rect  rect, ::UnityEngine::AndroidJavaObject*  popupResultMessage) ;

/// @brief Method _initAndroid3D, addr 0x16d15d0, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _initAndroid3D(int32_t  width, int32_t  height, ::UnityEngine::AndroidJavaObject*  popupResultMessage) ;

/// @brief Method _pointerDown, addr 0x16ce230, size 0x23c, virtual false, abstract: false, final false
inline void _pointerDown(::UnityEngine::Vector2  normalizedPoint, ::Vuplex::WebView::MouseButton  mouseButton, int32_t  clickCount, bool  preventStealingFocus) ;

/// @brief Method _pointerUp, addr 0x16ce500, size 0x1dc, virtual false, abstract: false, final false
inline void _pointerUp(::UnityEngine::Vector2  normalizedPoint, ::Vuplex::WebView::MouseButton  mouseButton, int32_t  clickCount) ;

/// @brief Method _renderPluginOncePerFrame, addr 0x16d16d8, size 0x68, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _renderPluginOncePerFrame() ;

/// @brief Method _resize, addr 0x16d1740, size 0x124, virtual true, abstract: false, final false
inline void _resize() ;

/// @brief Method _setConsoleMessageEventsEnabled, addr 0x16d1864, size 0xf0, virtual true, abstract: false, final false
inline void _setConsoleMessageEventsEnabled(bool  enabled) ;

/// @brief Method _setFocusedInputFieldEventsEnabled, addr 0x16d1954, size 0xf0, virtual true, abstract: false, final false
inline void _setFocusedInputFieldEventsEnabled(bool  enabled) ;

/// @brief Method add_AuthRequested, addr 0x16cb984, size 0x168, virtual true, abstract: false, final true
inline void add_AuthRequested(::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*  value) ;

/// @brief Method add_DownloadProgressChanged, addr 0x16cb688, size 0xb4, virtual true, abstract: false, final true
inline void add_DownloadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  value) ;

/// @brief Method add_FileSelectionRequested, addr 0x16cbbf0, size 0x168, virtual true, abstract: false, final true
inline void add_FileSelectionRequested(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  value) ;

/// @brief Method add_PopupRequested, addr 0x16cbdcc, size 0xb4, virtual true, abstract: false, final true
inline void add_PopupRequested(::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*  value) ;

/// @brief Method add_RenderProcessGone, addr 0x16d1db0, size 0xbc, virtual false, abstract: false, final false
inline void add_RenderProcessGone(::System::EventHandler*  value) ;

/// @brief Method add_ScriptAlert, addr 0x16d1e70, size 0xb4, virtual false, abstract: false, final false
inline void add_ScriptAlert(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  value) ;

/// @brief Method add_ScriptAlerted, addr 0x16cbf34, size 0x168, virtual false, abstract: false, final false
inline void add_ScriptAlerted(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  value) ;

/// @brief Method add_ScriptConfirmRequested, addr 0x16cc110, size 0x168, virtual false, abstract: false, final false
inline void add_ScriptConfirmRequested(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs_1<bool>*>*  value) ;

/// @brief Method add_TextureChanged, addr 0x16cb7f0, size 0xb4, virtual true, abstract: false, final true
inline void add_TextureChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*  value) ;

static inline ::UnityEngine::AndroidJavaClass* getStaticF__class() ;

static inline bool getStaticF__splitApplicationBinaryEnabled() ;

static inline ::System::Nullable_1<bool> getStaticF__webViewPackageIsAvailable() ;

/// @brief Method get_Native2DModeEnabled, addr 0x16cb958, size 0x8, virtual true, abstract: false, final true
inline bool get_Native2DModeEnabled() ;

/// @brief Method get_PluginType, addr 0x16cb960, size 0x8, virtual true, abstract: false, final true
inline ::Vuplex::WebView::WebPluginType get_PluginType() ;

/// @brief Method get_Rect, addr 0x16cb968, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_Visible, addr 0x16cb970, size 0x8, virtual true, abstract: false, final true
inline bool get_Visible() ;

/// @brief Convert to "::Vuplex::WebView::IWebView"
constexpr ::Vuplex::WebView::IWebView* i___Vuplex__WebView__IWebView() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithChangingTexture"
constexpr ::Vuplex::WebView::IWithChangingTexture* i___Vuplex__WebView__IWithChangingTexture() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithDeepLinking"
constexpr ::Vuplex::WebView::IWithDeepLinking* i___Vuplex__WebView__IWithDeepLinking() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithDownloads"
constexpr ::Vuplex::WebView::IWithDownloads* i___Vuplex__WebView__IWithDownloads() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithFallbackTextureData"
constexpr ::Vuplex::WebView::IWithFallbackTextureData* i___Vuplex__WebView__IWithFallbackTextureData() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithFileSelection"
constexpr ::Vuplex::WebView::IWithFileSelection* i___Vuplex__WebView__IWithFileSelection() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithFind"
constexpr ::Vuplex::WebView::IWithFind* i___Vuplex__WebView__IWithFind() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithHttpAuth"
constexpr ::Vuplex::WebView::IWithHttpAuth* i___Vuplex__WebView__IWithHttpAuth() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithMovablePointer"
constexpr ::Vuplex::WebView::IWithMovablePointer* i___Vuplex__WebView__IWithMovablePointer() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithNative2DMode"
constexpr ::Vuplex::WebView::IWithNative2DMode* i___Vuplex__WebView__IWithNative2DMode() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithNativeJavaScriptDialogs"
constexpr ::Vuplex::WebView::IWithNativeJavaScriptDialogs* i___Vuplex__WebView__IWithNativeJavaScriptDialogs() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithNativeOnScreenKeyboard"
constexpr ::Vuplex::WebView::IWithNativeOnScreenKeyboard* i___Vuplex__WebView__IWithNativeOnScreenKeyboard() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithPdfCreation"
constexpr ::Vuplex::WebView::IWithPdfCreation* i___Vuplex__WebView__IWithPdfCreation() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithPointerDownAndUp"
constexpr ::Vuplex::WebView::IWithPointerDownAndUp* i___Vuplex__WebView__IWithPointerDownAndUp() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithPopups"
constexpr ::Vuplex::WebView::IWithPopups* i___Vuplex__WebView__IWithPopups() noexcept;

/// @brief Convert to "::Vuplex::WebView::IWithSettableUserAgent"
constexpr ::Vuplex::WebView::IWithSettableUserAgent* i___Vuplex__WebView__IWithSettableUserAgent() noexcept;

/// @brief Method remove_AuthRequested, addr 0x16cbb7c, size 0x74, virtual true, abstract: false, final true
inline void remove_AuthRequested(::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*  value) ;

/// @brief Method remove_DownloadProgressChanged, addr 0x16cb73c, size 0xb4, virtual true, abstract: false, final true
inline void remove_DownloadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  value) ;

/// @brief Method remove_FileSelectionRequested, addr 0x16cbd58, size 0x74, virtual true, abstract: false, final true
inline void remove_FileSelectionRequested(::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  value) ;

/// @brief Method remove_PopupRequested, addr 0x16cbe80, size 0xb4, virtual true, abstract: false, final true
inline void remove_PopupRequested(::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*  value) ;

/// @brief Method remove_RenderProcessGone, addr 0x16d1e6c, size 0x4, virtual false, abstract: false, final false
inline void remove_RenderProcessGone(::System::EventHandler*  value) ;

/// @brief Method remove_ScriptAlert, addr 0x16d1f24, size 0xb4, virtual false, abstract: false, final false
inline void remove_ScriptAlert(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  value) ;

/// @brief Method remove_ScriptAlerted, addr 0x16cc09c, size 0x74, virtual false, abstract: false, final false
inline void remove_ScriptAlerted(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  value) ;

/// @brief Method remove_ScriptConfirmRequested, addr 0x16cc278, size 0x74, virtual false, abstract: false, final false
inline void remove_ScriptConfirmRequested(::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs_1<bool>*>*  value) ;

/// @brief Method remove_TextureChanged, addr 0x16cb8a4, size 0xb4, virtual true, abstract: false, final true
inline void remove_TextureChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*  value) ;

static inline void setStaticF__class(::UnityEngine::AndroidJavaClass*  value) ;

static inline void setStaticF__splitApplicationBinaryEnabled(bool  value) ;

static inline void setStaticF__webViewPackageIsAvailable(::System::Nullable_1<bool>  value) ;

/// @brief Method set_Visible, addr 0x16cb978, size 0xc, virtual false, abstract: false, final false
inline void set_Visible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebView(AndroidWebView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebView(AndroidWebView const& ) = delete;

/// @brief Field DllName offset 0xffffffff size 0x8
static constexpr ::ConstString  DllName{u"VuplexWebViewAndroid"};

/// @brief Field _2dWebViewClassName offset 0xffffffff size 0x8
static constexpr ::ConstString  _2dWebViewClassName{u"com.vuplex.webview.WebView"};

/// @brief Field _3dWebViewClassName offset 0xffffffff size 0x8
static constexpr ::ConstString  _3dWebViewClassName{u"com.vuplex.webview.WebView3D"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{115};

/// @brief Field DownloadProgressChanged, offset: 0x120, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::DownloadChangedEventArgs*>*  ___DownloadProgressChanged;

/// @brief Field TextureChanged, offset: 0x128, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*  ___TextureChanged;

/// @brief Field <PluginType>k__BackingField, offset: 0x130, size: 0x4, def value: None
 ::Vuplex::WebView::WebPluginType  ____PluginType_k__BackingField;

/// @brief Field <Visible>k__BackingField, offset: 0x134, size: 0x1, def value: None
 bool  ____Visible_k__BackingField;

/// @brief Field PopupRequested, offset: 0x138, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::PopupRequestedEventArgs*>*  ___PopupRequested;

/// @brief Field _authRequestedHandler, offset: 0x140, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*  ____authRequestedHandler;

/// @brief Field _fileSelectionHandler, offset: 0x148, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::FileSelectionEventArgs*>*  ____fileSelectionHandler;

/// @brief Field _pendingFindCallbacks, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<::Vuplex::WebView::FindResult>*>*  ____pendingFindCallbacks;

/// @brief Field _scriptAlertHandler, offset: 0x158, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  ____scriptAlertHandler;

/// @brief Field _scriptConfirmHandler, offset: 0x160, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs_1<bool>*>*  ____scriptConfirmHandler;

/// @brief Field _waitForEndOfFrame, offset: 0x168, size: 0x8, def value: None
 ::UnityEngine::WaitForEndOfFrame*  ____waitForEndOfFrame;

/// @brief Field _webView, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ____webView;

/// @brief Field ScriptAlert, offset: 0x178, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ScriptDialogEventArgs*>*  ___ScriptAlert;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ___DownloadProgressChanged) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ___TextureChanged) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____PluginType_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____Visible_k__BackingField) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ___PopupRequested) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____authRequestedHandler) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____fileSelectionHandler) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____pendingFindCallbacks) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____scriptAlertHandler) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____scriptConfirmHandler) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____waitForEndOfFrame) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ____webView) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebView, ___ScriptAlert) == 0x178, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebView, 0x180>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView*, "Vuplex.WebView", "AndroidWebView");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___c__DisplayClass136_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___c__DisplayClass136_0*, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass136_0");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___c__DisplayClass140_0*, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass140_0");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___c__DisplayClass141_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___c__DisplayClass141_0*, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass141_0");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___c__DisplayClass163_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___c__DisplayClass163_0*, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass163_0");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___c__DisplayClass41_0*, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass41_0");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_0*, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass44_0");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___c__DisplayClass44_1*, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass44_1");
NEED_NO_BOX(::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___renderPluginOncePerFrame_d__149*, "Vuplex.WebView", "AndroidWebView/<_renderPluginOncePerFrame>d__149");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView__GetCookie_d__159, "Vuplex.WebView", "AndroidWebView/<GetCookie>d__159");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView__GetCookie_d__160, "Vuplex.WebView", "AndroidWebView/<GetCookie>d__160");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView__InitInNative2DMode_d__56, "Vuplex.WebView", "AndroidWebView/<InitInNative2DMode>d__56");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView__Init_d__55, "Vuplex.WebView", "AndroidWebView/<Init>d__55");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___initAndroid2D_d__144, "Vuplex.WebView", "AndroidWebView/<_initAndroid2D>d__144");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebView___initAndroid3D_d__145, "Vuplex.WebView", "AndroidWebView/<_initAndroid3D>d__145");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::__c__DisplayClass140_0_AndroidWebView____handlePopup_b__0_d, "Vuplex.WebView", "AndroidWebView/<>c__DisplayClass140_0/<<_handlePopup>b__0>d");
