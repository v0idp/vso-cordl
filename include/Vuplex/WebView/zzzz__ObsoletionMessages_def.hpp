#pragma once
// IWYU pragma private; include "Vuplex/WebView/ObsoletionMessages.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObsoletionMessages)
// Forward declare root types
namespace Vuplex::WebView {
class ObsoletionMessages;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::ObsoletionMessages);
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.ObsoletionMessages
class CORDL_TYPE ObsoletionMessages : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObsoletionMessages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObsoletionMessages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObsoletionMessages(ObsoletionMessages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObsoletionMessages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObsoletionMessages(ObsoletionMessages const& ) = delete;

/// @brief Field Blur offset 0xffffffff size 0x8
static constexpr ::ConstString  Blur{u"IWebView.Blur() has been removed. Please use SetFocused(false) instead: https://developer.vuplex.com/webview/IWebView#SetFocused"};

/// @brief Field CanGoBack offset 0xffffffff size 0x8
static constexpr ::ConstString  CanGoBack{u"The callback-based CanGoBack(Action) version of this method has been removed. Please switch to the Task-based CanGoBack() version instead. If you prefer using a callback instead of awaiting the Task, you can still use a callback like this: CanGoBack().ContinueWith(result => {...})"};

/// @brief Field CanGoForward offset 0xffffffff size 0x8
static constexpr ::ConstString  CanGoForward{u"The callback-based CanGoForward(Action) version of this method has been removed. Please switch to the Task-based CanGoForward() version instead. If you prefer using a callback instead of awaiting the Task, you can still use a callback like this: CanGoForward().ContinueWith(result => {...})"};

/// @brief Field CaptureScreenshot offset 0xffffffff size 0x8
static constexpr ::ConstString  CaptureScreenshot{u"The callback-based CaptureScreenshot(Action) version of this method has been removed. Please switch to the Task-based CaptureScreenshot() version instead. If you prefer using a callback instead of awaiting the Task, you can still use a callback like this: CaptureScreenshot().ContinueWith(result => {...})"};

/// @brief Field DisableViewUpdates offset 0xffffffff size 0x8
static constexpr ::ConstString  DisableViewUpdates{u"DisableViewUpdates() has been removed. Please use SetRenderingEnabled(false) instead: https://developer.vuplex.com/webview/IWebView#SetRenderingEnabled"};

/// @brief Field EnableViewUpdates offset 0xffffffff size 0x8
static constexpr ::ConstString  EnableViewUpdates{u"EnableViewUpdates() has been removed. Please use SetRenderingEnabled(true) instead: https://developer.vuplex.com/webview/IWebView#SetRenderingEnabled"};

/// @brief Field Focus offset 0xffffffff size 0x8
static constexpr ::ConstString  Focus{u"IWebView.Focus() has been removed. Please use SetFocused(false) instead: https://developer.vuplex.com/webview/IWebView#SetFocused"};

/// @brief Field GetRawTextureData offset 0xffffffff size 0x8
static constexpr ::ConstString  GetRawTextureData{u"The callback-based GetRawTextureData(Action) version of this method has been removed. Please switch to the Task-based GetRawTextureData() version instead. If you prefer using a callback instead of awaiting the Task, you can still use a callback like this: GetRawTextureData().ContinueWith(result => {...})"};

/// @brief Field HandleKeyboardInput offset 0xffffffff size 0x8
static constexpr ::ConstString  HandleKeyboardInput{u"IWebView.HandleKeyboardInput() has been renamed to IWebView.SendKey(). Please switch to SendKey()."};

/// @brief Field Init offset 0xffffffff size 0x8
static constexpr ::ConstString  Init{u"IWebView.Init(Texture2D, float, float) has been removed in v4. Please switch to IWebView.Init(int, int) and await the Task it returns. For more details, please see this article: https://support.vuplex.com/articles/v4-changes#init"};

/// @brief Field Init2 offset 0xffffffff size 0x8
static constexpr ::ConstString  Init2{u"IWebView.Init(Texture2D, float, float, Texture2D) has been removed in v4. Please switch to IWebView.Init(int, int) and await the Task it returns. For more details, please see this article: https://support.vuplex.com/articles/v4-changes#init"};

/// @brief Field PageLoadFailed offset 0xffffffff size 0x8
static constexpr ::ConstString  PageLoadFailed{u"IWebView.PageLoadFailed is now deprecated. Please use IWebView.LoadFailed instead: https://developer.vuplex.com/webview/IWebView#LoadFailed"};

/// @brief Field Resolution offset 0xffffffff size 0x8
static constexpr ::ConstString  Resolution{u"IWebView.Resolution has been removed in v4. Please use WebViewPrefab.Resolution or CanvasWebViewPrefab.Resolution instead. For more details, please see this article: https://support.vuplex.com/articles/v4-changes#resolution"};

/// @brief Field SetResolution offset 0xffffffff size 0x8
static constexpr ::ConstString  SetResolution{u"IWebView.SetResolution() has been removed in v4. Please set the WebViewPrefab.Resolution or CanvasWebViewPrefab.Resolution property instead. For more details, please see this article: https://support.vuplex.com/articles/v4-changes#resolution"};

/// @brief Field SizeInPixels offset 0xffffffff size 0x8
static constexpr ::ConstString  SizeInPixels{u"IWebView.SizeInPixels is now deprecated. Please use IWebView.Size instead: https://developer.vuplex.com/webview/IWebView#Size"};

/// @brief Field VideoRectChanged offset 0xffffffff size 0x8
static constexpr ::ConstString  VideoRectChanged{u"IWebView.VideoRectChanged has been removed. Please use IWithFallbackVideo.VideoRectChanged instead: https://developer.vuplex.com/webview/IWithFallbackVideo#VideoRectChanged"};

/// @brief Field VideoTexture offset 0xffffffff size 0x8
static constexpr ::ConstString  VideoTexture{u"IWebView.VideoTexture has been removed. Please use IWithFallbackVideo.VideoTexture instead: https://developer.vuplex.com/webview/IWithFallbackVideo#VideoTexture"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::ObsoletionMessages, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::ObsoletionMessages);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::ObsoletionMessages*, "Vuplex.WebView", "ObsoletionMessages");
